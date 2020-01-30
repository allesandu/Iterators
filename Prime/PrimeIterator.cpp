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
    this->primeArray = new int[posNumber];// (write in next via realocc)
    this->primeArray[this->current] = this->result;
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
    this->primeArray[this->current] = this->result;
}

// PrimeIterator& PrimeIterator::operator++() {
//     this->next();
//     return *this;
// }

void PrimeIterator::operator++() {
    this->next();
}

// PrimeIterator PrimeIterator::operator++(int) {
//     PrimeIterator temp = *this;
    
//     ++*this;
//     return temp;
// }

void PrimeIterator::operator++(int) {
    this->next();
}

void PrimeIterator::prev() {
    if ( this->over() ) {
        this->current = this->limit;
    }
    if (this->current > first) {
        this->current -= 1;
        this->result = this->primeArray[this->current];
    }
}

std::ostream& operator<<(std::ostream& out, const PrimeIterator& pr) {
    out << *pr;
    return out;
}
