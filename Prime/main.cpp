#include <iostream>
#include "PrimeIterator.h"
// #include <cmath>

// int primeFoo(int n) {
//     int limit = n;
//     int flag = 0;
    
//     for ( int i = 1; i <= limit; i++) {
//         if ( n % i == 0 ) {
//             flag += 1;
//         }
//     }
//     if ( flag == 2 ) {
//         return n;
//     }
//     return 0;
// };

// int primeV(int numberPos) {
//     int flag = 0;
    
//     for ( int i = 1; i < numberPos * 6; i++ ) {
//         if ( primeFoo(i) != 0 ) {
//             flag += 1;
//         }
//         if ( flag == numberPos ) {
//             return primeFoo(i);
//         }
//     }
// }

int main() {
    PrimeIterator* primeIt = new PrimeIterator(5);
    
    for ( ; !primeIt->over(); primeIt->next() ) {
        std::cout << primeIt->value() << std::endl;
    }
    
    std::cout << "===========================================" << std::endl;
    
    primeIt->begin();
    for ( ; !primeIt->over(); (*primeIt)++ ) {
        std::cout << *primeIt << std::endl;
    }
    
    std::cout << "===========================================" << std::endl;
    // std::cout << primeIt->value() << std::endl;
    primeIt->prev();
    std::cout << primeIt->value() << std::endl;
    primeIt->prev();
    std::cout << primeIt->value() << std::endl;
    primeIt->prev();
    std::cout << primeIt->value() << std::endl;
    primeIt->prev();
    std::cout << primeIt->value() << std::endl;
    primeIt->prev();
    std::cout << primeIt->value() << std::endl;
    primeIt->prev();
    std::cout << primeIt->value() << std::endl;
    primeIt->prev();
    std::cout << primeIt->value() << std::endl;
    // std::cout << "===========================================" << std::endl;
    // for ( int i = 1; i <= 15; i++ ) {
    //     int temp = primeFoo(i);
        
    //     if ( temp != 0 ) {
    //         std::cout << primeFoo(i) << std::endl;
    //     }
    // }
    
    // std::cout << "===========================================" << std::endl;
    // int num = 4;
    // std::cout << num << " element = " << primeV(num) << std::endl;
    
    return 0;
}
