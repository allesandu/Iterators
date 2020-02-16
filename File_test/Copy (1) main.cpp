#include "FileIterator.h"
#include <iostream>
#include <fstream>

int main() {
    // const std::string& fileName = "Text.txt";
    // const std::string& fileName = "testInt.txt";
    // const std::string& fileName = "testStr.txt";
    const std::string& fileName = "testDoubl.txt";
    
    std::ifstream* in = new std::ifstream();
    in->open(fileName, std::ifstream::in);
    
    std::cout << "----------------------" << std::endl;
    for ( ; in->good(); ) {
        char term = in->get();
        std::cout << "<me> : " << term << std::endl;
    }
    
    std::cout << "----------------------" << std::endl;
    std::cout << "seq from FILE ends!" << std::endl;
    in->close();
    
    
    std::cout << "================ from FILEITERATOR:" << std::endl;
    FileIterator<std::string>* fi = new FileIterator<std::string>(fileName);
    
    for ( ; !fi->over(); fi->next() ) {
        std::cout << fi->value() << std::endl;
    }
    delete fi;
    
    std::cout << "================ FILEITERATOR with overloaded:" << std::endl;
    FileIterator<char>* fii = new FileIterator<char>(fileName);
    for ( ; !fii->over(); ++*fii ) { // it works OK
    // for ( ; !fi->over(); fi++ ) { // it noesnt works !
        std::cout << *fii << std::endl; // it works OK
    }
    
    delete fii;
    
    return 0;
}
