#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
            int                 _raw;
            static const int    _fract_bits;

    public:
            Fixed();
            Fixed(const Fixed &copy);
            Fixed(int const nb);
            Fixed(float const nb);
            ~Fixed();

            Fixed&  operator= (Fixed const &reFixed);

            int     getRawBits(void) const;
            void    setRawBits(int const raw);
            float   toFloat(void) const;
            int     toInt(void) const;

};

std::ostream &operator<< (std::ostream &o, Fixed const &reFixed);

#endif