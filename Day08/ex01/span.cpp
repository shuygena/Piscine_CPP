#include "span.hpp"

Span::Span(unsigned int n): N(n), counter(n)
{}

Span::Span(): N(0)
{
    this->counter = 0;
}

Span::Span(const Span &copy)
{
    this->N = copy.N;
    this->counter = copy.counter;
    this->arr = copy.arr;
}

Span::~Span(){}

Span &Span::operator=(Span &ref)
{
    this->N = ref.N;
    this->counter = ref.counter;
    this->arr = ref.arr;
    return *this;
}

void Span::addNumber(int number)
{
    try
    {
        if (this->counter == 0)
            throw ConteinerIsFull();
        else
        {
            this->arr.insert(number);
            this->counter = this->counter - 1;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int Span::shortestSpan()
{
    if (arr.size() < 2)
        throw TooSmallArray();
    std::multiset<int>::iterator it = arr.begin();
    int min = (*this).longestSpan();
    std::multiset<int>::iterator it2 = arr.begin();
    while (++it != arr.end())
    {
        if (min > abs(*it2 - *it))
            min = abs(*it2 - *it);
        if (min == 0)
            break;
        ++it2;
    }
    return (min);
}

int Span::longestSpan()
{
    if (arr.size() < 2)
        throw TooSmallArray();
    std::multiset<int>::iterator it1 = arr.begin();
    std::multiset<int>::iterator it2 = arr.end();
    it2--;
    return (*it2 - *it1);
}

void Span::addRange(int range)
{
    int i;
    std::srand(0);
    try
    {
        if (arr.size() >= N)
            throw ConteinerIsFull();
        if (range > (int)N - (int)arr.size())
            throw LargeRange();
        for (i = 0; i < range; i++)
            arr.insert(rand());
        this->counter -= range;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
