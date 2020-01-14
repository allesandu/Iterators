#ifndef ARRAYITERATOR_H
#define ARRAYITERATOR_H
#include <iostream>

class ArrayIterator {
    private:
        int current;
        int limit;
        int* array;
        
    public:
        ArrayIterator(int* inputArray, int posNumber);
        ~ArrayIterator();
        
        bool over();
        void begin();
        
        int value();
        int operator*() const;
        
        void next();
        
        static const int first = 0;
};

// std::ostream& operator<<(std::operator& out, const ArrayIterator& arr);

#endif // ARRAYITERATOR_H
