#ifndef FILEITERATOR_H
#define FILEITERATOR_H
#include <iostream>
#include <fstream>

class FileIterator {
    private:
        std::ifstream* inputFile;
        char term;
    
    public:
        FileIterator(const std::string& fileName);
        ~FileIterator();
        
        bool over();
        
        void next();
        
        char value();
};

#endif // FILEITERATOR_H
