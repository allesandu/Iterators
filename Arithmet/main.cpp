#include <iostream>
#include "Arithmet.h"

int main() {
    Arithmet* ar1 = new Arithmet(1, 3, 5);
    
    std::cout << *ar1 << std::endl;
    ar1->next();
    std::cout << "Next element = " << ar1->value() << std::endl;
    
    return 0;
}
