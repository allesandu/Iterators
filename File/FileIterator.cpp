#include "FileIterator.h"
#include <iostream>
#include <fstream>

FileIterator::FileIterator(const std::string& fileName) {
    this->inputFile = new std::ifstream();
    this->inputFile->open(fileName, std::ifstream::in);
    this->term = this->inputFile->get();
}

FileIterator::~FileIterator() {
    this->inputFile->close();
    delete this->inputFile;
}

bool FileIterator::over() {
    return this->inputFile->eof();
}

void FileIterator::next() {
    if ( this->over() ) {
        return;
    }
    this->term = this->inputFile->get();
}

char FileIterator::value() {
    return this->term;
}