#include "ArrayIterator.h"
#include <iostream>

ArrayIterator::ArrayIterator(int* inputArray, int posNumber) {
    this->current  = first;
    this->limit = posNumber - 1;
    this->array = inputArray;
}

ArrayIterator::~ArrayIterator() {
    delete this->array;
}

bool ArrayIterator::over() {
    return this->current > this->limit;
}

void ArrayIterator::begin() {
    this->current  = first;
}

int ArrayIterator::value() {
    return this->array[this->current];
}

// int ArrayIterator::operator*() const() {
//     return this->value();
// }

void ArrayIterator::next() {
    if ( this->over() ) {
        return;
    }
    this->current += 1;
}

// std::ostream& operator<<(std::ostream& out, const ArrayIterator& arr) {
//     out << *arr;
    
//     return out;
// }
