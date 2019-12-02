#include "Arithmet.h"

Arithmet::Arithmet(int start, int diff, int amount) {
    this->current = start;
    this->limit = amount;
    this->difference = diff;
    
    counter = 1;
}

Arithmet::~Arithmet() {};

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
    return counter >+ this->limit;
}

void Arithmet::next() {
    if ( over() ) {
        std::cout << "It is end of sequences! The last value was: ";
        std::cout << this->getCurrent() << std::endl;
        
        return;
   }
    counter += 1;
    this->current += this->difference;
}

int Arithmet::value() {
    return this->current;
}

int Arithmet::counter;

std::ostream& operator<<(std::ostream& out, const Arithmet& ari) {
    out << "Текущий[" << Arithmet::counter << "] = " << ari.getCurrent();
    out << " Макс # = " << ari.getLimit();
    out << " Шаг = " << ari.getDiff();
    
    return out;
}
