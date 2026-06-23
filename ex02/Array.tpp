#include "Array.hpp"


template<class T>
Array<T>::Array(void) : arr(NULL), len(0)
{
};

template<class T>
Array<T>::Array(unsigned int n) : arr(new T[n]), len(n)
{
};

template<class T>
Array<T>::Array(const Array &other)
{
    len = other.len;
    arr = new T[len];
    for (unsigned int i = 0; i < len; ++i)
        arr[i] = other.arr[i];
};

template<class T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this == &other)
        return *this;
    delete[] arr;
    len = other.len;
    arr = new T[len];
    for (unsigned int i = 0; i < len; ++i)
        arr[i] = other.arr[i];
    return *this;
};

template<class T>
Array<T>::~Array()
{
    delete[] arr;
};

template<class T>
T &Array<T>::operator[](unsigned int pos)
{
	if (pos >= this->len)
		throw std::out_of_range("Index out of range");
	return (this->arr[pos]);
};

template<class T>
const T &Array<T>::operator[](unsigned int pos) const
{
    if (pos >= this->len)
		throw std::out_of_range("Index out of range");
	return (this->arr[pos]);
};

template<class T>
unsigned int Array<T>::size() const
{
    return this->len;
};