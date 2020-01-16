#include <iostream>
#include "ArrayIterator.h"


int main() {
    
    // int array[] = {1, 3, 15, 16, 7, 90};
    char array[] = {'d', 'p', 'f', 'y', 'z'};
    // std::string array[] = {"do", "you", "feel", "it", "right"};
    
    // ArrayIterator<int>* seq = new ArrayIterator<int>(arrayInt, 5);
    ArrayIterator<char>* seq = new ArrayIterator<char>(array, 5);
    // ArrayIterator<std::string>* seq = new ArrayIterator<std::string>(array, 5);
    
    // std::cout << "certain element = " << seq->value() << std::endl;
    
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
