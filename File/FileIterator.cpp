#include "FileIterator.h"
#include <iostream>
#include <fstream>

template <class T>
FileIterator<T>::FileIterator(const std::string& fileName) {
    this->inputFile = new std::ifstream();
    
    this->inputFile->open(fileName, std::ifstream::in);
    // this->term = this->inputFile->get();
    (*this->inputFile) >> this->term;
}

template <class T>
FileIterator<T>::~FileIterator() {
    this->inputFile->close();
    delete this->inputFile;
}

template <class T>
bool FileIterator<T>::over() {
    return this->inputFile->eof(); //// this UNHIDE
    // return !this->inputFile->good();
}

template <class T>
void FileIterator<T>::next() {
    if ( this->inputFile->good() ) { //// this UNHIDE
        (*this->inputFile) >> this->term;
    } //// this UNHIDE
}

// template <class T>
// void FileIterator<T>::next() {
//     // if ( this->over() ) {
//     // if ( !this->inputFile->good() ) {
//     //     return;
//     // }
//     // this->term = this->inputFile->get();
//     (*this->inputFile) >> this->term;
// }

template <class T>
FileIterator<T>& FileIterator<T>::operator++() {
    this->next();
    // (*this->inputFile) >> this->term; // maybe not need because  NEXT is correct(with good {26-31})
    return *this;
}

template <class T>
FileIterator<T> FileIterator<T>::operator++(int) {
    FileIterator<T> temp = *this;
    
    ++*this;
    return temp;
}

template <class T>
const T FileIterator<T>::value() const {
    return this->term;
}

template <class T>
const T FileIterator<T>::operator*() const {
    return this->term;
}

template <class T>
std::ostream& operator<<(std::ostream& out, const FileIterator<T>& fit) {
    out << fit.value() << "_";
    return out;
}

template class FileIterator<int>;
template class FileIterator<double>;
template class FileIterator<char>;
template class FileIterator<std::string>;

template std::ostream& operator<<(std::ostream& out, const FileIterator<int>& fit);
template std::ostream& operator<<(std::ostream& out, const FileIterator<double>& fit);
template std::ostream& operator<<(std::ostream& out, const FileIterator<char>& fit);
template std::ostream& operator<<(std::ostream& out, const FileIterator<std::string>& fit);
