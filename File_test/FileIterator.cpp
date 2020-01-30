#include "FileIterator.h"
#include <iostream>
#include <fstream>

FileIterator::FileIterator(const std::string& fileName) {
    this->inputFile = new std::ifstream();
    
    this->inputFile->open(fileName, std::ifstream::in);
    // this->term = this->inputFile->get();
    (*this->inputFile) >> this->term;
}

FileIterator::~FileIterator() {
    this->inputFile->close();
    delete this->inputFile;
}

bool FileIterator::over() {
    return this->inputFile->eof();
    // return !this->inputFile->good();
}

void FileIterator::next() {
    if ( this->inputFile->good() ) {
        (*this->inputFile) >> this->term;
    }
}

// // void FileIterator::next() {
//     // if ( this->over() ) {
//     // if ( !this->inputFile->good() ) {
//     //     return;
//     // }
//     // this->term = this->inputFile->get();
//     (*this->inputFile) >> this->term;
// }

FileIterator& FileIterator::operator++() {
    this->next();
    // (*this->inputFile) >> this->term; // maybe not need because  NEXT is correct(with good {26-31})
    return *this;
}

FileIterator FileIterator::operator++(int) {
    FileIterator temp = *this;
    
    ++*this;
    return temp;
}

const int FileIterator::value() const {
    return this->term;
}

const int FileIterator::operator*() const {
    return this->term;
}

// std::ostream& operator<<(std::ostream& out, const FileIterator& fit) {
//     out << fit.value() << "_";
//     return out;
// }
