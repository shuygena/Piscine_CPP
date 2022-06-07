#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(T *ptr, unsigned int len, void (*f)(T const &arr));
template <typename T> void print_heart(T const &text);
class Test
{
    public:
        Test():_d(6.022045) {};
        double get_d() const
        {
            return this->_d;
        }
    private:
        double _d;
};

std::ostream &operator<<(std::ostream &out, Test const &ref)
{
	out << ref.get_d();
	return out;
}

#endif