#ifndef PRIMEITERATOR_H
#define PRIMEITERATOR_H

class PrimeIterator {
    private:
        int current;
        int limit;
        int result;
        int* primeArray;
        
    public:
        PrimeIterator(int posNumber = 5);
        ~PrimeIterator();
        
        bool over();
        void begin();
        
        int value();
        int operator*() const;
        
        void next();
        // PrimeIterator& operator++();
        void operator++();
        // PrimeIterator operator++(int);
        void operator++(int);
        
        void prev();
        
        static const int first = 1;
};

std::ostream& operator<<(std::ostream& out, const PrimeIterator& prime);

#endif // PRIMEITERATOR_H
