#include <iostream>
#include "FactorialIterator.h"

int factorial(int n) {
    int res = 1;
    
    if ( n < 0) {
        return 0;
    }  else {
        for ( int i = 2; i <= n; i++ ) {
            res *= i;
        }
    }
    
    return res;
}

FactorialIterator::FactorialIterator(int number) {
    this->current = first;
    this->result = factorial(0);
    this->limit = number;
}

FactorialIterator::~FactorialIterator() {};

bool FactorialIterator::over() {
    return this->current > this->limit;
}

void FactorialIterator::begin() {
    this->current = first;
    this->result = factorial(0);
}

int FactorialIterator::value() {
    return this->result;
}

int FactorialIterator::operator*() const {
    return this->result;
}

void FactorialIterator::next() {
    if ( this->over() ) {
        return;
    }
    
    this->result = factorial(this->current);
    
    this->current += 1;
}

FactorialIterator& FactorialIterator::operator++() { // ++a
    this->next();
    return *this;
}

FactorialIterator FactorialIterator::operator++(int) { a++
    FactorialIterator temp = *this;
    
    ++*this;
    return temp;
}

std::ostream& operator<<(std::ostream& out, const FactorialIterator& fac) {
    out << *fac;
    return out;
}
