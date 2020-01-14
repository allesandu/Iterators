#ifndef ARITHMETICITERATOR_H
#define ARITHMETICITERATOR_H
#include <iostream>

class ArithmeticIterator {
    private:
        int current;
        int step;
        int limit;
        int term;
        
    public:
        ArithmeticIterator(int firstTerm, int diff, int amount = 10);
        ~ArithmeticIterator();
        
        bool over();
        // void begin();
        
        void next();
        void prev();

        
        int value();
        // int value(int newInd);// wrong realization
        
        int operator*() const;
        
        static const int first = 1;
};

std::ostream& operator<<(std::ostream& out, const ArithmeticIterator& ari);

#endif // ARITHMETICITERATOR_H
