#include "ArithmeticIterator.h"

ArithmeticIterator::ArithmeticIterator(int firstTerm, int diff, int amount) {
    this->current = first;
    this->step = diff;
    this->limit = amount;
    this->term = firstTerm;
}

ArithmeticIterator::~ArithmeticIterator() {};

bool ArithmeticIterator::over() {
    return this->current > this->limit;
}

void ArithmeticIterator::next() {
    if ( this->over() ) {
        return;
   }
    this->current += 1;
    this->term += this->step;
}

void ArithmeticIterator::operator++() {
    this->next();
}

void ArithmeticIterator::operator++(int) {
    this->next();
}

void ArithmeticIterator::prev() {
    if ( this->current > first ) {
        this->current -= 1;
        this->term -= this->step;
    }
}

int ArithmeticIterator::value() {
    return this->term;
}

int ArithmeticIterator::operator*() const{
    return this->term;
}

std::ostream& operator<<(std::ostream& out, const ArithmeticIterator& ari) {
    out << *ari;
    
    return out;
}
