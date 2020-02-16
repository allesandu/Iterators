#include "FileIterator.h"
#include <iostream>
#include <fstream>

int main() {
    // const std::string& fileName = "testChar.txt";
    // const std::string& fileName = "testInt.txt";
    // const std::string& fileName = "testStr.txt";
    const std::string& fileName = "testDouble.txt";
    // const std::string& fileName = "testDouble.in";
    
    std::ifstream* in = new std::ifstream();
    
    in->open(fileName, std::ifstream::in);
    if ( in->is_open() ) {
        std::cout << "----------------------" << std::endl;
        for ( ; in->good(); ) {
            char term = in->get();
            std::cout << "<me> : " << term << std::endl;
        }
        
        std::cout << "----------------------" << std::endl;
        std::cout << "seq from FILE ends!" << std::endl;
        in->close();
    } else {
        std::cout << "Erro opening file!!!" << std::endl;
    }
    
    delete in;
    
    // std::cout << "================ from FILEITERATOR:" << std::endl;
    // FileIterator<double>* fi = new FileIterator<double>(fileName); // must be THE SAME as into fii
    
    // for ( ; !fi->over(); fi->next() ) {
    //     std::cout << fi->value() << std::endl;
    // }
    // delete fi;
    
    std::cout << "================ FILEITERATOR with overloaded:" << std::endl;
    FileIterator<double>* fii = new FileIterator<double>(fileName);
    // for ( ; !fii->over(); ++*fii ) {
    for ( ; !fii->over(); (*fii)++ ) {
        std::cout << *fii << std::endl;
    }
    
    delete fii;
    
    return 0;
}
