#include <iostream>
#include "PrimeIterator.h"

int isPrime(int n) {
    int limit = n;
    int flag = 0;
    
    for ( int i = 1; i <= limit; i++) {
        if ( n % i == 0 ) {
            flag += 1;
        }
    }
    if ( flag == 2 ) {
        return n;
    }
    return 0;
}

int compute(int n) {
    int flag = 0;
    
    for ( int i = 1; i < n * 6; i++ ) {
        if ( isPrime(i) != 0 ) {
            flag += 1;
        }
        if ( flag == n ) {
            return isPrime(i);
        }
    }
}

PrimeIterator::PrimeIterator(int posNumber) {
    this->current = first;
    this->limit = posNumber;
    this->result = 2;
}

PrimeIterator::~PrimeIterator() {};

bool PrimeIterator::over() {
    return this->current > this->limit;
}

void PrimeIterator::begin() {
    this->current = first;
    this->result = 2;
}

int PrimeIterator::value() {
    return this->result;
}

int PrimeIterator::operator*() const {
    return this->result;
}

void PrimeIterator::next() {
    if ( this->over() ) {
        return;
    }
    this->current += 1;
    this->result = compute(this->current);
}

PrimeIterator& PrimeIterator::operator++() {
    this->next();
    return *this;
}

PrimeIterator PrimeIterator::operator++(int) {
    PrimeIterator temp = *this;
    
    ++*this;
    return temp;
}

std::ostream& operator<<(std::ostream& out, const PrimeIterator& pr) {
    out << *pr;
    return out;
}
