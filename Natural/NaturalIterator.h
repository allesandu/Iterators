#ifndef NATURALITERATOR_H
#define NATURALITERATOR_H
#include <iostream>

class NaturalIterator {
    private:
        int current;
        int limit;
        const int first = 1;
    public:
        NaturalIterator(int quantity = 10);
        ~NaturalIterator();
        
        bool over();
        
        int value();
        int operator*() const;
        
        int getCurrent() const;
        
        void operator++();
        
        void next();
        void begin();
};

std::ostream& operator<<(std::ostream& out, const NaturalIterator& iter);

#endif // NATURALITERATOR
