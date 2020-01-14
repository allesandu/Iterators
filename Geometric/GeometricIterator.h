#ifndef GEOMETRICITERATOR_H
#define GEOMETRICITERATOR_H

class GeometricIterator {
    private:
        int current;
        int step;
        int limit;
        int term;
        
    public:
        GeometricIterator(int firstTerm = 1, int ratio = 2, int amount = 5);
        
        ~GeometricIterator();
        
        bool over();
        // void begin();
        
        int value();
        int operator*() const;

        void next();
        static const int first = 1;
};

std::ostream& operator<<(std::ostream& out, const GeometricIterator& geom);

#endif // GEOMETRICITERATOR_H