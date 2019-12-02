#include <iostream>
#include "Arithmet.h"

int main() {
    Arithmet* ar1 = new Arithmet(1, 3, 5);
    
    std::cout << *ar1 << std::endl;
    std::cout << "Value is: " << ar1->value() << std::endl;
    std::cout << "_________________________________________________" << std::endl;
    
    for ( ; !ar1->over(); ar1->next() ) {
        std::cout << ar1->value() << "_";
    }
    std::cout << ar1->value() << std::endl;
    
    ar1->next();
    ar1->next();
    std::cout << ar1->value() << std::endl;
    
    ar1->prev();
    std::cout << ar1->value() << std::endl;
    ar1->prev();
    std::cout << ar1->value() << std::endl;
    ar1->prev();
    std::cout << ar1->value() << std::endl;
    ar1->prev();
    std::cout << ar1->value() << std::endl;
    ar1->prev();
    std::cout << ar1->value() << std::endl;
    ar1->prev();
    std::cout << ar1->value() << std::endl;
    // std::cout << "Next element = " << ar1->value() << std::endl;

    // std::cout << *ar1 << std::endl;
    
    // std::cout << "_________________________________________________" << std::endl;
    // ar1->next();
    // std::cout << "_________________________________________________" << std::endl;
    // std::cout << *ar1 << std::endl;
    
    return 0;
}
