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


Fixed &Fixed::operator= (const Fixed &reFixed)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &reFixed)
        _raw = reFixed.getRawBits();
    return *this;
}


bool    Fixed::operator> (Fixed const &reFixed)const
{
    return (this->_raw > reFixed.getRawBits());
}

bool    Fixed::operator< (Fixed const &reFixed)const
{
        return (this->_raw < reFixed.getRawBits());
}

bool    Fixed::operator<= (Fixed const &reFixed)const
{
        return (!(*this > reFixed));
}

bool    Fixed::operator>= (Fixed const &reFixed)const
{
        return (!(*this < reFixed));
}

bool    Fixed::operator== (Fixed const &reFixed)const
{
    return (this->_raw == reFixed.getRawBits());
}

bool    Fixed::operator!= (Fixed const &reFixed)const
{
        return (!(*this == reFixed));
}

Fixed Fixed::operator+(Fixed const &reFixed)
{
    Fixed sum;
    sum.setRawBits(this->_raw + reFixed.getRawBits());
    return (sum);
}

Fixed Fixed::operator*(Fixed const &reFixed)
{
    Fixed mult;
    mult.setRawBits((this->_raw * reFixed.getRawBits()) >> _fract_bits);
    return (mult);    
}

Fixed Fixed::operator-(Fixed const &reFixed)
{
    Fixed sub;
    sub.setRawBits(this->_raw - reFixed.getRawBits());
    return (sub);    
}

Fixed Fixed::operator/(Fixed const &reFixed)
{
    if (reFixed.getRawBits() == 0)
    {
        std::cout << "Divide by zero" << std::endl;
        return (*this);
    }
    Fixed div;
    div.setRawBits((this->_raw / reFixed.getRawBits()) << _fract_bits);
    return (div);    
}

Fixed &Fixed::operator++ (void)
{
    this->_raw += 1;
    return (*this);
}

Fixed &Fixed::operator-- (void)
{
    this->_raw -= 1;
    return (*this);   
}

const Fixed Fixed::operator++(int)
{
    Fixed tmp_cpy(*this);
    this->_raw += 1;
    return (tmp_cpy);
}

const Fixed Fixed::operator--(int)
{
    Fixed tmp_cpy(*this);
    this->_raw -= 1;
    return (tmp_cpy);    
}

Fixed &Fixed::min(Fixed &one, Fixed &two)
{
    if (one < two)
        return (one);
    return (two);
}

Fixed &Fixed::max(Fixed &one, Fixed &two)
{
    if (one < two)
        return (two);
    return (one);
}

Fixed const &Fixed::min(Fixed const &one, Fixed const &two)
{
    if (one < two)
        return (one);
    return (two);
}

Fixed const &Fixed::max(Fixed const &one, Fixed const &two)
{
    if (one < two)
        return (two);
    return (one);
} 

std::ostream &operator<< (std::ostream &o, Fixed const &reFixed)
{
    o << reFixed.toFloat();
    return (o);
}