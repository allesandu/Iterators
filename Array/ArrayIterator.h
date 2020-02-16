#ifndef ARRAYITERATOR_H
#define ARRAYITERATOR_H
#include <iostream>

template <class T>
class ArrayIterator {
    private:
        int current;
        int limit;
        T* array;
        const int first = 0;
        
    public:
        ArrayIterator(T* inputArray, int posNumber);
        ~ArrayIterator();
        
        bool over();
        void begin();
        
        const T value() const;
        const T operator*() const;
        
        void next();
        void operator++();
        void operator++(int);
        
};

template <class T>
std::ostream& operator<<(std::ostream& out, const ArrayIterator<T>& arr);

#endif // ARRAYITERATOR_H
