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

Fixed::Fixed(int const nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->_raw = nb << _fract_bits;
}

Fixed::Fixed(float const nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->_raw = roundf(nb * (1 << _fract_bits));    
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &reFixed)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &reFixed)
        _raw = reFixed.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw)
{
    _raw = raw;
}

int Fixed::getRawBits(void) const
{
    return (_raw);
}

float Fixed::toFloat(void) const
{
    return ((float)(this->_raw/(float)(1 << _fract_bits)));
}

int Fixed::toInt(void) const
{
    return (this->_raw >> _fract_bits);
}

std::ostream &operator<< (std::ostream &o, Fixed const &reFixed)
{
    o << reFixed.toFloat();
    return (o);
}