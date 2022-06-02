#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Dog* dog = new Dog();
    const Cat* cat = new Cat();
    Animal **farm = new Animal*[8];
    for (int i = 0; i < 8; i++)
    {
        if (i < 4)
            farm[i] = new Cat(*cat);
        else
            farm[i] = new Dog(*dog);
    }
    std::cout << "Array of animals: ";
    for (int i = 0; i < 8; i++)
        std::cout << farm[i]->getType() << " ";
    std::cout << std::endl << std::endl;
    for (int i = 0; i < 8; i++)
        delete farm[i];
    delete[] farm;
    delete cat;
    delete dog;
    return (0);
}