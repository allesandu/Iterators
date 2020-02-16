#ifndef PRIMEITERATOR_H
#define PRIMEITERATOR_H

class PrimeIterator {
    private:
        int current;
        int limit;
        int result;
        int* primeArray;
        const int first = 1;
        
    public:
        PrimeIterator(int posNumber = 5);
        ~PrimeIterator();
        
        bool over();
        void begin();
        
        int value();
        int operator*() const;
        
        void next();
        void operator++();
        void operator++(int);
        
        void prev();
        
};

std::ostream& operator<<(std::ostream& out, const PrimeIterator& prime);

#endif // PRIMEITERATOR_H
