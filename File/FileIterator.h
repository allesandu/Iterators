#ifndef FILEITERATOR_H
#define FILEITERATOR_H
#include <iostream>
#include <fstream>

template <class T>
class FileIterator {
    private:
        std::ifstream* inputFile;
        T term;
    
    public:
        FileIterator(const std::string& fileName);
        ~FileIterator();
        
        bool over();
        
        void next();
        
        void operator++();
        void operator++(int);
        
        const T value() const;
        const T operator*() const;
        
};

template <class T>
std::ostream& operator<<(std::ostream& out, const FileIterator<T>& fit);

#endif // FILEITERATOR_H
