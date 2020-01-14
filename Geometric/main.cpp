#include <iostream>
#include "GeometricIterator.h"

int main() {
    GeometricIterator* seqIt = new GeometricIterator(4, -2, 5);
    
    // GeometricIterator* seqIt = new GeometricIterator();
    
    std::cout << "_________________________________________________" << std::endl;
    
    // for ( ; !seqIt->over(); seqIt->next() ) {
    //     std::cout << seqIt->value() << std::endl;
    // }
    
    std::cout << "_________________________________________________" << std::endl;
        for ( ; !seqIt->over(); seqIt->next() ) {
        std::cout << "[overloading]  " << *seqIt << std::endl;
    }
    
    return 0;
}
