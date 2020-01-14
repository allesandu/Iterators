#ifndef PRIME_H
#define PRIME_H

class Prime {
    private:
        int current;
        int limit;
        int result;
        
    public:
        Prime(int posNumber = 5);
        ~Prime();
        
        bool over();
        void begin();
        
        int value();
        int operator*() const;
        
        void next();
        
        static const int first = 1;
};

std::ostream& operator<<(std::ostream& out, const Prime& prime);

#endif // PRIME_H