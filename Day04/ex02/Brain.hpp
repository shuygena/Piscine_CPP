#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(const Brain &copy);
        ~Brain();

        Brain &operator= (const Brain &reg);
        std::string getIdea(int i) const;
        void setIdea(std::string idea, int i);

    private:
        std::string *_ideas;
};

#endif