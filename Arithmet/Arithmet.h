#ifndef ARITHMET_H
#define ARITHMET_H
#include <iostream>

class Arithmet {
    private:
        int current;
        int limit;
        int difference;
        
    public:
        Arithmet(int start, int diff, int amount = 10);
        ~Arithmet();
        
        int getCurrent() const;
        int getLimit() const;
        int getDiff() const;
        
        bool over();
        
        void next();
        int value();
        // int operator*();
        
        static int firstElement;
};

std::ostream& operator<<(std::ostream& out, const Arithmet& ari);

#endif // ARITHMET_H
