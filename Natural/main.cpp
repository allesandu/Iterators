#include <iostream>
#include "NaturalIterator.h"

int main() {
    NaturalIterator* nat = new NaturalIterator();
    
    std::cout << "___________________________________________" << std::endl;
    for ( ; !nat->over(); nat->next()) {
        std::cout << nat->value() << std::endl;
    }
    std::cout << "___________________________________________" << std::endl;
    
    nat->begin();
    
    std::cout << "___________________________________________" << std::endl;
    for ( ; !nat->over(); ++*nat ) {// dont work operator++
        std::cout << "[operator] " << *nat << std::endl;
    }
    std::cout << "___________________________________________" << std::endl;
    std::cout << "Current is : " << nat->value() << std::endl;
    std::cout << "___________________________________________" << std::endl;
    nat->begin();
    std::cout << "Current is : " << nat->value() << std::endl;
    
    std::cout << "===========================================" << std::endl;
    NaturalIterator natur = NaturalIterator();
    
    std::cout << "___________________________________________" << std::endl;
    for ( ; !natur.over(); natur++ ) {// dont work operator++
        std::cout << "[stack] " << *natur << std::endl;
    }
    return 0;
}
