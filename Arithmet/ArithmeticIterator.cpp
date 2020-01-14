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

void ArithmeticIterator::prev() {
    if ( this->current > first ) {
        this->current -= 1;
        this->term -= this->step;
    }
}

// void ArithmeticIterator::begin() {
//     this->current = 1;
//     // this->term = firstTerm;
// }

int ArithmeticIterator::value() {
    return this->term;
}

int ArithmeticIterator::operator*() const{
    return this->term;
}

// int ArithmeticIterator::value(int newInd) {
//     if ( this->limit >= newInd ) {
//         this->term += (newInd - this->current ) * this->step;
//         this->current = newInd;
//         this->value();
//     }
// }

std::ostream& operator<<(std::ostream& out, const ArithmeticIterator& ari) {
    out << *ari;
    
    return out;
}
