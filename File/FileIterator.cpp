#include "FileIterator.h"
#include <iostream>
#include <fstream>

template <class T>
FileIterator<T>::FileIterator(const std::string& fileName) {
    this->inputFile = new std::ifstream();
    
    this->inputFile->open(fileName, std::ifstream::in);
    if ( this->inputFile->is_open() ) {
        (*this->inputFile) >> this->term;
    } else {
        std:: cout << "Error open FILE!" << std::endl;
    }
}

template <class T>
FileIterator<T>::~FileIterator() {
    this->inputFile->close();
    delete this->inputFile;
}

template <class T>
bool FileIterator<T>::over() {
    return this->inputFile->eof();
}

template <class T>
void FileIterator<T>::next() {
    if ( this->inputFile->good() ) {
        (*this->inputFile) >> this->term;
    }
}

template <class T>
void FileIterator<T>::operator++() {
    this->next();
}

template <class T>
void FileIterator<T>::operator++(int) {
    this->next();
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
    out << *fit;
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
