#include "FileIterator.h"
#include <iostream>
#include <fstream>

int main() {
    const std::string& fileName = "Text.txt";
    
    std::ifstream* in = new std::ifstream();
    in->open(fileName, std::ifstream::in);
    
    // while ( in->good() ) {
    //     char term = in->get();
    //     std::cout << term << std::endl;
    // }
    std::cout << "----------------------" << std::endl;
    for ( ; in->good(); ) {
        char term = in->get();
        std::cout << "<me> : " << term << std::endl;
    }
    
    std::cout << "----------------------" << std::endl;
    std::cout << "seq from FILE ends!" << std::endl;
    in->close();
    
    std::cout << "================ from FILEITERATOR:" << std::endl;
    FileIterator* fi = new FileIterator(fileName);
    for ( ; !fi->over(); fi->next() ) {
        std::cout << fi->value() << std::endl;
    }    
    delete fi;
    
    return 0;
}
