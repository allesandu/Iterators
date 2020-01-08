#ifndef FACTORIAL_H
#define FACTORIAL_H

class Factorial {
    private:
        int current;
        int limit;
        int result;
        
    public:
        Factorial(int number = 5);
        ~Factorial();
        
        bool over();
        void begin();
        
        int value();
        int operator*() const;
        
        void next();
        // void operator++();
        
        static const int first = 1;
};

std::ostream& operator<<(std::ostream& out, const Factorial& fac);

#endif // FACTORIAL_H