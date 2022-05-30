#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _raw = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &reFixed)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &reFixed)
        _raw = reFixed.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits called" << std::endl;
    _raw = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_raw);
}