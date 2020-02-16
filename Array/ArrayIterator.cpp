#include "ArrayIterator.h"
#include <iostream>

template <class T>
ArrayIterator<T>::ArrayIterator(T* inputArray, int posNumber) {
    this->current  = first;
    this->limit = posNumber - 1;
    this->array = inputArray;
}

template <class T>
ArrayIterator<T>::~ArrayIterator() {
    delete this->array;
}

template <class T>
bool ArrayIterator<T>::over() {
    return this->current > this->limit;
}

template <class T>
void ArrayIterator<T>::begin() {
    this->current  = first;
}

template <class T>
const T ArrayIterator<T>::value() const {
    return this->array[this->current];
}
template <class T>
const T ArrayIterator<T>::operator*() const {
    return this->array[this->current];
}

template <class T>
void ArrayIterator<T>::next() {
    if ( this->over() ) {
        return;
    }
    this->current += 1;
}

template <class T>
void ArrayIterator<T>::operator++() {
    this->next();
}

template <class T>
void ArrayIterator<T>::operator++(int) {
    this->next();
}

template <class T>
std::ostream& operator<<(std::ostream& out, const ArrayIterator<T>& arr) {
    out << *arr;
    
    return out;
}

template class ArrayIterator<int>;
template class ArrayIterator<double>;
template class ArrayIterator<char>;
template class ArrayIterator<std::string>;

template std::ostream& operator<<(std::ostream& out, const ArrayIterator<int>& arr);
template std::ostream& operator<<(std::ostream& out, const ArrayIterator<double>& arr);
template std::ostream& operator<<(std::ostream& out, const ArrayIterator<char>& arr);
template std::ostream& operator<<(std::ostream& out, const ArrayIterator<std::string>& arr);