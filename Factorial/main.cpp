#include <iostream>
#include "FactorialIterator.h"

int main() {
    FactorialIterator* fac = new FactorialIterator(6);
    
    std::cout << "Methods: ----------------------------------" << std::endl;
    for ( ; !fac->over(); fac->next() ) {
        std::cout << fac->value() << std::endl;
    }
    std::cout << "===========================================" << std::endl;
    
    fac->begin();
    std::cout << "overloading: -------------------------------" << std::endl;
    for ( ; !fac->over(); ++*fac ) { // find out with OPERATOR overloading maybe
        std::cout << *fac << std::endl;
    }
    std::cout << "===========================================" << std::endl;
    
    FactorialIterator factIt(5);
    std::cout << "overloading_new: ---------------------------" << std::endl;
    for ( ; !factIt.over(); ++factIt ) {
        std::cout << *factIt << std::endl;
    }
    std::cout << "===========================================" << std::endl;
    
    factIt.begin();
    
    std::cout << "overloading_new new: ----------------------" << std::endl;
    for ( ; !factIt.over(); factIt++ ) {
        std::cout << *factIt << std::endl;
    }
    std::cout << "===========================================" << std::endl;
    return 0;
}
