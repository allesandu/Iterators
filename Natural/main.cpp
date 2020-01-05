#include <iostream>
#include "NaturalIterator.h"

int main() {
    NaturalIterator* nat = new NaturalIterator(5);
    
    std::cout << "___________________________________________" << std::endl;
    for ( ; !nat->over(); nat->next()) {
        std::cout << nat->value() << std::endl;
    }
    std::cout << "___________________________________________" << std::endl;
    
    nat->begin();
    
    std::cout << "___________________________________________" << std::endl;
    // for ( ; !nat->over(); nat++ ) {// dont work operator++
    for ( ; !nat->over(); nat->next() ) {// dont work operator++
        std::cout << "[operator] " << *nat << std::endl;
    }
    std::cout << "___________________________________________" << std::endl;
    
    std::cout << "Current is : " << nat->value() << std::endl;
    std::cout << "___________________________________________" << std::endl;
    nat->begin();
    std::cout << "Current is : " << nat->value() << std::endl;
    
    return 0;
}
