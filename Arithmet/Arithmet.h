#ifndef ARITHMET_H
#define ARITHMET_H
#include <iostream>

class Arithmet {
    private:
        int index;
        int current;
        int limit;
        int difference;
        
    public:
        Arithmet(int start, int diff, int amount = 10);
        ~Arithmet();
        
        int getIndex() const;
        int getCurrent() const;
        int getLimit() const;
        int getDiff() const;
        
        bool over();
        
        void next();
        void prev();
        void begin();
        
        int value();
        int value(int newInd);
        
        int operator*() const;
        void operator++();
};

std::ostream& operator<<(std::ostream& out, const Arithmet& ari);

#endif // ARITHMET_H
