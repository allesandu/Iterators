#ifndef FACTORIALITERATOR_H
#define FACTORIALITERATOR_H

class FactorialIterator {
    private:
        int current;
        int limit;
        int result;
        const int first = 1;
        
    public:
        FactorialIterator(int number = 5);
        ~FactorialIterator();
        
        bool over();
        void begin();
        
        int value();
        int operator*() const;
        
        void next();
        void operator++();
        void operator++(int);
        
};

std::ostream& operator<<(std::ostream& out, const FactorialIterator& fac);

#endif // FACTORIALITERATOR_H
