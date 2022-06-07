#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
            T *arr;
            unsigned int _size;
    public:
            Array(): _size(0){};
            Array(unsigned int n): arr(new T[n]), _size(n){};
            Array(const Array &copy)
            { this->_size = copy.get_size();
            this->arr = new T[copy.get_size()];
            for (size_t i = 0; i < this->get_size(); i++)
                this->arr[i] = copy.arr[i];};
            ~Array(){delete [] arr;};
            
            
            Array &operator=(const Array &ref)
            {
                if (this == &ref)
                    return (*this);
                if (this->arr)
                    delete[] this->arr;
                this->arr = new T[ref.get_size()];
                this->_size = ref.get_size();
                for (size_t i = 0; i < this->get_size(); i++)
                    this->arr[i] = ref.arr[i];
                return(*this);
            };

            T &operator[](unsigned int index)
            {
                if (this->_size <= index)
                    throw NotExist();
                return this->arr[index];
            };
            const T &operator[](unsigned int index) const
            {
                if (this->_size <= index)
                    throw NotExist();
                return this->arr[index];
            };

            class NotExist: public std::exception
            {
            public:
                const char* what() const throw()
                {
                    return ("This element doesn't exist");
                };
            };
            
            size_t get_size() const {return this->_size;};
};

#endif