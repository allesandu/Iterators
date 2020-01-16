#ifndef ARRAYITERATOR_H
#define ARRAYITERATOR_H
#include <iostream>

template <class T>
class ArrayIterator {
    private:
        int current;
        int limit;
        T* array;
        
    public:
        ArrayIterator(T* inputArray, int posNumber);
        ~ArrayIterator();
        
        bool over();
        void begin();
        
        T value();
        // T operator*() const;
        
        void next();
        
        static const int first = 0;
};

// std::ostream& operator<<(std::operator& out, const ArrayIterator& arr);

#endif // ARRAYITERATOR_H
