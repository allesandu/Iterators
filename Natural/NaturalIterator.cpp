#include <iostream>
#include "NaturalIterator.h"


    NaturalIterator::NaturalIterator(int quantity) {
        this->current = 1;
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

    int NaturalIterator::getCurrent() const {
        return this->current;
    }

    void NaturalIterator::next() {
        if ( this->over() ) {
            return;
        }
        this->current += 1;
    }

    void NaturalIterator::begin() {
        this->current = first;
    }

std::ostream& operator<<(std::ostream& out, const NaturalIterator& iter) {
    out << *iter;//.getCurrent();
    return out;
}
