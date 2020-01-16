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
T ArrayIterator<T>::value() {
    return this->array[this->current];
}

// int ArrayIterator::operator*() const() {
//     return this->value();
// }

template <class T>
void ArrayIterator<T>::next() {
    if ( this->over() ) {
        return;
    }
    this->current += 1;
}

// std::ostream& operator<<(std::ostream& out, const ArrayIterator& arr) {
//     out << *arr;
    
//     return out;
// }

template class ArrayIterator<int>;
template class ArrayIterator<double>;
template class ArrayIterator<char>;
template class ArrayIterator<std::string>;
