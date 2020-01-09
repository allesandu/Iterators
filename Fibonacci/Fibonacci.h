#ifndef FIBONACCI_H
#define FIBONACCI_H

class Fibonacci {
    private:
        int current;
        int limit;
        int result;
        
    public:
        Fibonacci(int number = 5);
        ~Fibonacci();
        
        bool over();
        void begin();
        
        int value();
        int operator*() const;
        
        void next();
        
        static const int first = 1;
};

std::ostream& operator<<(std::ostream& out, const Fibonacci& fac);

#endif // FIBONACCI_H
