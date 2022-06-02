#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal *hellokitty = new WrongCat();
    std::cout << hellokitty->getType() << " " << std::endl;
    hellokitty->makeSound();

    delete hellokitty;
    delete i;
    delete j;
    delete meta;
    return (0);
}