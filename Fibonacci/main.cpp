#include <iostream>
#include "FibonacciIterator.h"

int main() {
    FibonacciIterator* fib = new FibonacciIterator(5);
    
    for ( ; !fib->over(); fib->next() ) {
        std::cout << fib->value() << std::endl;
    }
    
    std::cout << "===========================================" << std::endl;
    
    fib->begin();
    // for ( ; !fib->over(); ++*fib ) {
    for ( ; !fib->over(); (*fib)++ ) {
        std::cout << *fib << std::endl;
    }
    
    return 0;
}
