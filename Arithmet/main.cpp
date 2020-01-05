#include <iostream>
#include "Arithmet.h"

int main() {
    Arithmet* ar1 = new Arithmet(1, 3, 10);
    
    std::cout << *ar1 << std::endl;
    
    // std::cout << "Value is: " << ar1->value() << std::endl;
    std::cout << "_________________________________________________" << std::endl;
    
    // for ( ; !ar1->over(); ar1->next() ) {
    //     std::cout << ar1->value() << std::endl;
    //     // std::cout << *ar1 << std::endl;
    // }
    
    // // std::cout << "Seq is over = " << ar1->over() << std::endl;
    // std::cout << "_________________________________________________" << std::endl;
    
    std::cout << "_________________________________________________" << std::endl;
        // for ( ; !ar1->over(); ++ar1 ) {
        for ( ; !ar1->over(); ar1->next() ) {
        std::cout << "[overloading]  " << *ar1 << std::endl;
    }
    std::cout << "_________________________________________________" << std::endl;
    
    std::cout << "Certain Value = " << ar1->value(5) << std::endl;
    std::cout << "_________________________________________________" << std::endl;
    std::cout << "Current index = " << ar1->getIndex() << std::endl;
    
    // ar1->next();
    // std::cout << ar1->value() << std::endl;
    
    // ar1->prev();
    // std::cout << ar1->value() << std::endl;
    // ar1->prev();
    // std::cout << ar1->value() << std::endl;
    // ar1->prev();
    // std::cout << ar1->value() << std::endl;
    // ar1->prev();
    // std::cout << ar1->value() << std::endl;
    // ar1->prev();
    // std::cout << ar1->value() << std::endl;
    // ar1->prev();
    // std::cout << ar1->value() << std::endl;
    // std::cout << "Next element = " << ar1->value() << std::endl;

    // std::cout << *ar1 << std::endl;
    
    // std::cout << "_________________________________________________" << std::endl;
    // ar1->next();
    // std::cout << "_________________________________________________" << std::endl;
    // std::cout << *ar1 << std::endl;
    
    return 0;
}
