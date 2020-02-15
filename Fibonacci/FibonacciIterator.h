#ifndef FIBONACCIITERATOR_H
#define FIBONACCIITERATOR_H

class FibonacciIterator {
    private:
        int current;
        int limit;
        int result;
        const int first = 1;
        
    public:
        FibonacciIterator(int posNumber = 10);
        ~FibonacciIterator();
        
        bool over();
        void begin();
        
        int value();
        int operator*() const;
        
        void next();
        void operator++();
        void operator++(int);
};

std::ostream& operator<<(std::ostream& out, const FibonacciIterator& fac);

#endif // FIBONACCIITERATOR_H
