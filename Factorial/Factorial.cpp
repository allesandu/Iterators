#include <iostream>
#include "Factorial.h"

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

Factorial::Factorial(int number) {
    this->current = first;
    this->result = factorial(0);
    this->limit = number;
}

Factorial::~Factorial() {};

bool Factorial::over() {
    return this->current > this->limit;
}

void Factorial::begin() {
    this->current = first;
    this->result = factorial(0);
}

int Factorial::value() {
    return this->result;
}

int Factorial::operator*() const {
    return this->result;
}

void Factorial::next() {
    if ( this->over() ) {
        return;
    }
    
    this->result = factorial(this->current);
    
    this->current += 1;
}

// void Factorial::operator++() { // doesnt work properly
//     this->next();
// }

std::ostream& operator<<(std::ostream& out, const Factorial& fac) {
    out << *fac;
    return out;
}
