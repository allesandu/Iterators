#include <iostream>
#include "ArrayIterator.h"

int main() {
    
    int arrayInt[] = {1, 3, 15, 16, 7, 90};
    char arrayCh[] = {'d', 'p', 'f', 'y', 'z'};
    std::string arrayStr[] = {"do", "you", "feel", "it", "right"};
    
    ArrayIterator* seq = new ArrayIterator(arrayInt, 5);
    
    for ( ; !seq->over(); seq->next() ) {
        std::cout << seq->value() << std::endl;
    }
    
    std::cout << "===========================================" << std::endl;
    
    seq->begin();
    
    for ( ; !seq->over(); seq->next() ) {
        std::cout << seq->value() << std::endl;
    }
    
    // for ( ; !seq->over(); seq->next() ) { // find out with OPERATOR overloading maybe
    //     std::cout << *seq << std::endl;
    // }
    
    return 0;
}
