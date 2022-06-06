#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    std::srand(std::time(0) + rand());

    int g = rand() % 3;

    switch(g)
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
        default:
            return NULL;
    }
    return NULL;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
    else
        std::cout << "can't identify";
}

void identify(Base& p)
{
    try
    {
        A &tmp = dynamic_cast<A &>(p);
        (void)tmp;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    try
    {
        B &tmp1 = dynamic_cast<B &>(p);
        (void)tmp1;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    try
    {
        C &tmp2 = dynamic_cast<C &>(p);
        (void)tmp2;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
}

int main()
{
    A a;
    B b;
    C c;

    std::cout << "A B C:" << std::endl; 
    identify(a);
    identify(b);
    identify(c);
    std::cout << "C B A:" << std::endl; 
    identify(&c);
    identify(&b);
    identify(&a);
    std::cout << "random random random:" << std::endl;
    Base *tmp1 = generate();
    Base *tmp2 = generate();
    Base *tmp3 = generate();
    identify(tmp1);
    identify(tmp2);
    identify(tmp3);
    delete tmp1;
    delete tmp2;
    delete tmp3;
    
    return 0;
}
