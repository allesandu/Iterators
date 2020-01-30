#ifndef FILEITERATOR_H
#define FILEITERATOR_H
#include <iostream>
#include <fstream>

class FileIterator {
    private:
        std::ifstream* inputFile;
        int term;
    
    public:
        FileIterator(const std::string& fileName);
        ~FileIterator();
        
        bool over();
        
        void next();
        
        FileIterator& operator++();
        FileIterator operator++(int);
        
        const int value() const;
        const int operator*() const;
        
};

// std::ostream& operator<<(std::ostream& out, const FileIterator<int>& fit);

#endif // FILEITERATOR_H
