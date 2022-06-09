#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <cstdlib>
#include <set>

class Span
{
    private:
            unsigned int N;
            std::multiset<int> arr;
            unsigned int counter;

    public:   
            Span(unsigned int n);
            Span();
            Span &operator=(Span &ref);
            Span(const Span &copy);
            ~Span();

            void addNumber(int number);
            template <class Iterator> void addNumber(Iterator &begin, Iterator &end)
            {
                unsigned int i = 0;
                Iterator tmp = begin;
                while (tmp != end)
                {
                    i++;
                    tmp++;
                }
                if (i + this->arr.size() > N)
                    throw ConteinerIsFull();
                std::copy(begin, end, std::inserter(this->arr, this->arr.end()));
            };
            int shortestSpan();
            int longestSpan();
            void addRange(int range);

            class ConteinerIsFull: public std::exception
            {
                public:
                const char* what() const throw()
                {
                    return ("Conteiner is full");
                }
            };
            class LargeRange: public std::exception
            {
                public:
                const char* what() const throw()
                {
                    return ("This range is Large");
                }
            };
            class TooSmallArray: public std::exception
            {
                public:
                const char* what() const throw()
                {
                    return ("Don't exist enough elements");
                }
            };
};

#endif