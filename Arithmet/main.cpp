#include <iostream>
#include "ArithmeticIterator.h"

int main() {
    ArithmeticIterator* ar1 = new ArithmeticIterator(0, 3, 5);
    
    // std::cout << "Value is: " << ar1->value() << std::endl;
    std::cout << "_________________________________________________" << std::endl;
    
    // for ( ; !ar1->over(); ar1->next() ) {
    for ( ; !ar1->over(); (*ar1)++ ) {
        // std::cout << ar1->value() << std::endl;
        std::cout << "[overloading]  " << *ar1 << std::endl;
    }
    
    std::cout << "_________________________________________________" << std::endl;
    
    std::cout << "Seq is over = " << ar1->over() << std::endl;
    
    std::cout << "_________________________________________________" << std::endl;
    
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
    // std::cout << "Certain Value = " << ar1->value(10) << std::endl;
    
    return 0;
}
