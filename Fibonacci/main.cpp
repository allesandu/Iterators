#include <iostream>
#include "Fibonacci.h"

int main() {
    Fibonacci* fib = new Fibonacci();
    
    for ( ; !fib->over(); fib->next() ) {
        std::cout << fib->value() << std::endl;
    }
    
    std::cout << "===========================================" << std::endl;
    
    fib->begin();
    for ( ; !fib->over(); fib->next() ) { // find out with OPERATOR overloading maybe
        std::cout << *fib << std::endl;
    }
    
    return 0;
}
