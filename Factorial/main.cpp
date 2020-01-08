#include <iostream>
#include "Factorial.h"

int main() {
    Factorial* fac = new Factorial(10);
    
    for ( ; !fac->over(); fac->next() ) {
        std::cout << fac->value() << std::endl;
    }
    
    std::cout << "===========================================" << std::endl;
    
    fac->begin();
    for ( ; !fac->over(); fac->next() ) { // find out with OPERATOR overloading maybe
        std::cout << *fac << std::endl;
    }
    
    return 0;
}
