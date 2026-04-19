#include <iostream>
int main() {
    /* for is a loop that is used when the number of iterations is known.
       It consists of three parts: initialization, condition, and increment/decrement.
       The syntax is:
       for (initialization; condition; increment/decrement) {
           // code to be executed
       }
    */
   for (int i = 0; i < 10; i++) {
       std::cout << "Iteration " << i << "\n";
   }
}