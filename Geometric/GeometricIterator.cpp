#include <iostream>
#include "GeometricIterator.h"

GeometricIterator::GeometricIterator(int firstTerm, int ratio, int amount) {
    this->current = first;
    this->step = ratio;
    this->limit = amount;
    this->term = firstTerm;
}

GeometricIterator::~GeometricIterator() {};

bool GeometricIterator::over() {
    return this->current > this->limit;
}

int GeometricIterator::value() {
    return this->term;
}

int GeometricIterator::operator*() const {
    return this->term;
}

void GeometricIterator::next() {
    if ( over() ) {
        return;
    }
    this->current += 1;
    this->term *= this->step;
}

void GeometricIterator::operator++() {
    this->next();
}

void GeometricIterator::operator++(int) {
    this->next();
}

std::ostream& operator<<(std::ostream& out, const GeometricIterator& geom) {
    out << *geom;
    return out;
}
