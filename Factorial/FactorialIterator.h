#ifndef FACTORIALITERATOR_H
#define FACTORIALITERATOR_H

class FactorialIterator {
    private:
        int current;
        int limit;
        int result;
        
    public:
        FactorialIterator(int number = 5);
        ~FactorialIterator();
        
        bool over();
        void begin();
        
        int value();
        int operator*() const;
        
        void next();
        FactorialIterator& operator++();
        FactorialIterator operator++(int);
        
        static const int first = 1;
};

std::ostream& operator<<(std::ostream& out, const FactorialIterator& fac);

#endif // FACTORIALITERATOR_H
