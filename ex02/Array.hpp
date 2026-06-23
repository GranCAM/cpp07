#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
    private:
        T               *arr;
        unsigned int    len;
    public:
        Array();
        Array(unsigned int n);
        Array (const Array &other);
        Array &operator=(const Array &other);
        ~Array();
        T &operator[](unsigned int pos);
        const T &operator[](unsigned int pos) const;

        unsigned int    size() const;
};

#include "Array.tpp"

#endif