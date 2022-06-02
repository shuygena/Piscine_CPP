#include "Brain.hpp"
#include <string>

Brain::Brain()
{
    std::cout << "Default constructor called. Brain was created"
            << std::endl;
    this->_ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "idea # " + std::to_string(i + 1);
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Copy constructor called. Brain was created" << std::endl;
    this->_ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy.getIdea(i);
}

Brain::~Brain()
{
    delete [] this->_ideas;
    std::cout << "Default destructor called. Brain was deleted"
            << std::endl;
}

Brain &Brain::operator= (const Brain &reg)
{
    if (this != &reg)
    {
        delete[] this->_ideas;
        this->_ideas = new std::string[100];
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = reg.getIdea(i);
    }
    return (*this);
}

std::string Brain::getIdea(int i) const
{
    return(this->_ideas[i]);
}

void Brain::setIdea(std::string idea, int i)
{
    this->_ideas[i] = idea;
}