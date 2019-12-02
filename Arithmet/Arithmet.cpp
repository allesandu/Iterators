#include "Arithmet.h"

Arithmet::Arithmet(int start, int diff, int amount) {
    this->current = start;
    this->limit = amount;
    this->difference = diff;
    
    firstElement = start;
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
    return this->current > this->limit;
}

void Arithmet::next() {
    if ( !over() ) {
        std::cout << "It is end of sequences!";
        return;
   }
    std::cout << "You are ROCK !!!" << std::endl;
    this->current += 1;
}

int Arithmet::value() {
    return this->current;
}

// int Arithmet::operator*() {
//     return this->current;
// }

int Arithmet::firstElement;

std::ostream& operator<<(std::ostream& out, const Arithmet& ari) {
    out << "Текущий=" << ari.getCurrent();
    out << "  Максимальный=" << ari.getLimit();
    out << "  Шаг=" << ari.getDiff() << std::endl;
    
    return out;
}
