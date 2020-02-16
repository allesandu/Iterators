#include <iostream>
#include "ArrayIterator.h"


int main() {
    
    // int array[] = {1, 3, 15, 16, 7, 90};
    double array[] = {0.05, -7.3, 1.5, 99.01, 7, 0.90};
    // char array[] = {'d', 'p', 'f', 'y', 'z'};
    // std::string array[] = {"do", "you", "feel", "it", "right"};
    
    // ArrayIterator<int>* seq = new ArrayIterator<int>(array, 5);
    ArrayIterator<double>* seq = new ArrayIterator<double>(array, 6);
    // ArrayIterator<char>* seq = new ArrayIterator<char>(array, 5);
    // ArrayIterator<std::string>* seq = new ArrayIterator<std::string>(array, 5);
    
    // std::cout << "certain element = " << seq->value() << std::endl;
    
    for ( ; !seq->over(); seq->next() ) {
        std::cout << seq->value() << std::endl;
    }
    
    std::cout << "===========================================" << std::endl;
    
    seq->begin();
    
    // for ( ; !seq->over(); seq->next() ) {
    //     std::cout << seq->value() << std::endl;
    // }
    
    // for ( ; !seq->over(); ++*seq ) {
    for ( ; !seq->over(); (*seq)++ ) {
        std::cout << *seq << std::endl;
    }
    
    return 0;
}
