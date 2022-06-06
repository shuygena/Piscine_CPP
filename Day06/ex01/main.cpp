#include <iostream>

struct Data
{
    int i;
    float f;
    double d;
};

uintptr_t serialize(Data *data)
{
    return reinterpret_cast<uintptr_t>(data);
}

Data *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data dt = {8, 2.1f, 4.2};
    std::cout << "i = " << dt.i << std::endl;
    std::cout << "f = " << dt.f << std::endl;
    std::cout << "d = " << dt.d << std::endl;
    std::cout << "~Deserialization~" << std::endl;
    uintptr_t sz = serialize(&dt);
    Data *dt2 = deserialize(sz);
    std::cout << "i = " << dt2->i << std::endl;
    std::cout << "f = " << dt2->f << std::endl;
    std::cout << "d = " << dt2->d << std::endl;
    if (&dt == dt2)
        std::cout << "Pointers are equal" << std::endl;
    else
        std::cout << "Pointers arn't equal" << std::endl;
    return 0;
}
