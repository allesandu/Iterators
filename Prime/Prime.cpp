#include <iostream>
#include "Prime.h"

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

Prime::Prime(int posNumber) {
    this->current = first;
    this->limit = posNumber;
    this->result = 2;
}

Prime::~Prime() {};

bool Prime::over() {
    return this->current > this->limit;
}

void Prime::begin() {
    this->current = first;
    this->result = 2;
}

int Prime::value() {
    return this->result;
}

int Prime::operator*() const {
    return this->result;
}

void Prime::next() {
    if ( this->over() ) {
        return;
    }
    this->current += 1;
    this->result = compute(this->current);
}

std::ostream& operator<<(std::ostream& out, const Prime& pr) {
    out << *pr;
    return out;
}
