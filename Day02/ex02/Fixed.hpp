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
            bool    operator> (Fixed const &reFixed)const;
            bool    operator< (Fixed const &reFixed)const;
            bool    operator<= (Fixed const &reFixed)const;
            bool    operator>= (Fixed const &reFixed)const;
            bool    operator== (Fixed const &reFixed)const;
            bool    operator!= (Fixed const &reFixed)const;
            Fixed operator+(Fixed const &reFixed);
            Fixed operator*(Fixed const &reFixed);
            Fixed operator-(Fixed const &reFixed);
            Fixed operator/(Fixed const &reFixed);
            Fixed &operator++(void);
            Fixed &operator--(void);
            const Fixed operator++(int);
            const Fixed operator--(int);
            static Fixed &min(Fixed &one, Fixed &two);           
            static Fixed &max(Fixed &one, Fixed &two); 
            static Fixed const &min(Fixed const &one, Fixed const &two); 
            static Fixed const &max(Fixed const &one, Fixed const &two); 

            int     getRawBits(void) const;
            void    setRawBits(int const raw);
            float   toFloat(void) const;
            int     toInt(void) const;

};

std::ostream &operator<< (std::ostream &o, Fixed const &reFixed);

#endif