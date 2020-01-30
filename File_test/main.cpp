#include "FileIterator.h"
#include <iostream>
#include <fstream>

int main() {
    // const std::string& fileName = "testInt.txt";
    // const std::string& fileName = "testStr.txt";
    const std::string& fileName = "testVar.txt";
    // const std::string& newFile = "testInt.txt";
    // std::ofstream myOut;
    // myOut.open("/home/allesandu/Documents/iterators/File_test//testInt.txt");
    // myOut << "1 2 10 -5 16 2\n";
    // std::cout << "File created." << std::endl;
    // myOut.close();
    
    // const std::string& newFile = "testStr.txt";
    // std::ofstream myOut;
    // myOut.open(newFile);
    // myOut << "b a y t z az\n";
    // std::cout << "File created." << std::endl;
    // myOut.close();
    
    // const std::string& newFile = "testVar.txt";
    // std::ofstream myOut;
    // myOut.open(newFile);
    // myOut << "2 5 -9 12 0 -1.5 afk\n";
    // std::cout << "File created." << std::endl;
    // myOut.close();
    
    // std::cout << "----------------------" << std::endl;
    // for ( ; in->good(); ) {
    //     char term = in->get();
    //     std::cout << "<me> : " << term << std::endl;
    // }
    
    // std::cout << "----------------------" << std::endl;
    // std::cout << "seq from FILE ends!" << std::endl;
    // in->close();
    
    
    std::cout << "================ from FILEITERATOR:" << std::endl;
    FileIterator* fi = new FileIterator(fileName);
    
    for ( ; !fi->over(); fi->next() ) {
        std::cout << fi->value() << std::endl;
    }
    delete fi;
    
    // std::cout << "================ FILEITERATOR with overloaded:" << std::endl;
    // FileIterator<std::string>* fii = new FileIterator<std::string>(fileName);
    // for ( ; !fii->over(); ++*fii ) { // it works OK
    // // for ( ; !fi->over(); fi++ ) { // it noesnt works !
    //     std::cout << *fii << std::endl; // it works OK
    // }
    
    // delete fii;
    
    return 0;
}
