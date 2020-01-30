#ifndef PRIMEITERATOR_H
#define PRIMEITERATOR_H

class PrimeIterator {
    private:
        int current;
        int limit;
        int result;
        
    public:
        PrimeIterator(int posNumber = 5);
        ~PrimeIterator();
        
        bool over();
        void begin();
        
        int value();
        int operator*() const;
        
        void next();
        PrimeIterator& operator++();
        PrimeIterator operator++(int);
        
        static const int first = 1;
};

std::ostream& operator<<(std::ostream& out, const PrimeIterator& prime);

#endif // PRIMEITERATOR_H
