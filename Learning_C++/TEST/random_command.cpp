#include <iostream>
#include <cstdlib> // For rand() and srand()
int main() {
    srand(time(NULL));
    /*srand(time(NULL)) is the begin point of random number generation
    as you know time is changed overtime, when wa've called time(NULL)
    is mean that we get different number each times we run the program.
    If we do not call srand(time(NULL)), 
    we will get the same number every time we run the program.*/
    int luckyNumber = std::rand() % 100; // Random number between 0 and 99
    std::cout << luckyNumber;

    return 0;

}