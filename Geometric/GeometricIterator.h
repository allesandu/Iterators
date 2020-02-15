#ifndef GEOMETRICITERATOR_H
#define GEOMETRICITERATOR_H

class GeometricIterator {
    private:
        int current;
        int step;
        int limit;
        int term;
        const int first = 1;
        
    public:
        GeometricIterator(int firstTerm = 1, int ratio = 2, int amount = 5);
        
        ~GeometricIterator();
        
        bool over();
        
        int value();
        int operator*() const;

        void next();
        void operator++();
        void operator++(int);
        
};

std::ostream& operator<<(std::ostream& out, const GeometricIterator& geom);

#endif // GEOMETRICITERATOR_H
