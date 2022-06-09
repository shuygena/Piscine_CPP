#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <set>

class NotFind: public std::exception{
    const char *what() const throw()
    {
        return ("Not find");
    }
};

template<typename T>

typename T::iterator easyfind(T &conteiner, int number)
{
    typename T::iterator find_elem;
    find_elem = std::find(conteiner.begin(), conteiner.end(), number);
    if (find_elem == conteiner.end())
        throw NotFind();
    return find_elem;
}

#endif