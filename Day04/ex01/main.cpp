#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const Cat* myCat = new Cat();
    const Cat * catDeepCopy = new Cat(*myCat);
    {
        Dog mydog;
        Dog dogCopy = mydog;
        std::cout << mydog.getType() << std::endl;
    }

    Animal **farm = new Animal*[8];
    for (int i = 0; i < 8; i++)
    {
        if (i < 4)
            farm[i] = new Animal(*cat);
        else
            farm[i] = new Animal(*dog);
    }
    std::cout << "Array of animals: ";
    for (int i = 0; i < 8; i++)
        std::cout << farm[i]->getType() << " ";
    std::cout << std::endl << std::endl;

    for (int i = 0; i < 8; i++)
        delete farm[i];
    delete[] farm;
    delete catDeepCopy;
    delete myCat;
    delete cat;
    delete dog;
    return (0);
}