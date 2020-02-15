#include <iostream>
#include "FibonacciIterator.h"

int fibonacci(int n) {
    int fibValue;
    int prev1 = 1;
    int prev2 = 1;
    
    if ( n <= 0 || n > 46 ) {
        return 0;
    }
   for ( int counter = 0; counter < n - 2; counter++ ) {
            fibValue = prev1 + prev2;
            prev1 = prev2;
            prev2 = fibValue;
        }
    
    return prev2;
}

FibonacciIterator::FibonacciIterator(int posNumber) {
    this->current = first;
    this->result = fibonacci(0);
    this->limit = posNumber;
}

FibonacciIterator::~FibonacciIterator() {};

bool FibonacciIterator::over() {
    return this->current > this->limit;
}

void FibonacciIterator::begin() {
    this->current = first;
    this->result = fibonacci(0);
}

int FibonacciIterator::value() {
    return this->result;
}

int FibonacciIterator::operator*() const {
    return this->result;
}

void FibonacciIterator::next() {
    if ( this->over() ) {
        return;
    }
    this->result = fibonacci(this->current);
    this->current += 1;
}

void FibonacciIterator::operator++() {
    this->next();
}

void FibonacciIterator::operator++(int) {
    this->next();
}

std::ostream& operator<<(std::ostream& out, const FibonacciIterator& fib) {
    out << *fib;
    return out;
}
