#include <iostream>
#include "NaturalIterator.h"


    NaturalIterator::NaturalIterator(int quantity) {
        this->current = first;
        this->limit = quantity;
    }

    NaturalIterator::~NaturalIterator() {};
    
    bool NaturalIterator::over() {
        return this->current > this->limit;
    }

    int NaturalIterator::value() {
        return this->current;
    }

    int NaturalIterator::operator*() const{
        return this->current;
    }

    void NaturalIterator::next() {
        if ( this->over() ) {
            return;
        }
        this->current += 1;
    }
    
    void NaturalIterator::operator++() {
        this->next();
    }
    
    void NaturalIterator::operator++(int) {
        this->next();
    }

    void NaturalIterator::begin() {
        this->current = first;
    }

std::ostream& operator<<(std::ostream& out, const NaturalIterator& iter) {
    out << *iter;
    return out;
}
