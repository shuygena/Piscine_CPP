#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
    private:
            int                 _raw;
            static const int    _fract_bits;

    public:
            Fixed();
            Fixed(const Fixed& copy);
            ~Fixed();

            Fixed&  operator= (Fixed const &reFixed);
            int     getRawBits(void) const;
            void    setRawBits(int const raw);

};

#endif