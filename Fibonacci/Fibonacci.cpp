#include <iostream>
#include "Fibonacci.h"

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

Fibonacci::Fibonacci(int number) {
    this->current = first;
    this->result = fibonacci(0);
    this->limit = number;
}

Fibonacci::~Fibonacci() {};

bool Fibonacci::over() {
    return this->current > this->limit;
}

void Fibonacci::begin() {
    this->current = first;
    this->result = fibonacci(0);
}

int Fibonacci::value() {
    return this->result;
}

int Fibonacci::operator*() const {
    return this->result;
}

void Fibonacci::next() {
    if ( this->over() ) {
        return;
    }
    
    this->result = fibonacci(this->current);
    
    this->current += 1;
}

std::ostream& operator<<(std::ostream& out, const Fibonacci& fib) {
    out << *fib;
    return out;
}
