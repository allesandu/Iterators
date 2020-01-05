#include "Arithmet.h"

Arithmet::Arithmet(int start, int diff, int amount) {
    this->index = 1;
    this->current = start;
    this->limit = amount;
    this->difference = diff;
}

Arithmet::~Arithmet() {};

int Arithmet::getIndex() const {
    return this->index;
}

int Arithmet::getCurrent() const{
    return this->current;
}

int Arithmet::getLimit() const{
    return this->limit;
}

int Arithmet::getDiff() const{
    return this->difference;
}

bool Arithmet::over() {
    return this->index > this->limit;
}

void Arithmet::next() {
    if ( this->over() ) {
        std::cout << "It is end of sequences! The last value was: ";// probably delete this row at all
        std::cout << this->getCurrent() << std::endl;// probably delete this row at all
        
        return;
   }
    this->index += 1;
    this->current += this->difference;
}

void Arithmet::prev() {
    if ( this->index > 1 ) {
        this->index -= 1;
        this->current -= this->difference;
    }
}

void Arithmet::begin() {
    this->index = 1;
    // this->current = start;
}

int Arithmet::value() {
    // if ( !over() ) {
        return this->current;
    // }
    // if ( over() ) {
    //     return;
    // }
    // return this->current;
}

int Arithmet::operator*() const{
    return this->current;
}

void Arithmet::operator++() {
    this->next();
    // if ( this->over() ) {
    //     return;
    // }
    // this->index += 1;
    // this->current += this->difference;
}

int Arithmet::value(int newInd) {
    // if ( !over() ) {
        // if ( newInd <= this->limit ) {
            // std::cout << "We are here ! - WHY IS 10!" << std::endl;
            this->current += (newInd - this->index ) * this->difference;
            this->index = newInd;
        // }
    // }
    // return this->current;
    this->value();
}

std::ostream& operator<<(std::ostream& out, const Arithmet& ari) {
    out << *ari;
    
    return out;
}
