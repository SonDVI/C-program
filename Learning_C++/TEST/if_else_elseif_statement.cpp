#include <iostream>
int main() {
    /* If statement is a conditional statement that
    executes a block of code if its condition is true
    and skips it if the condition is false.

    if (condition) {
        // code to be executed if condition is true
    }
    */
   /*else is used to specify a block of code that
    will be executed if the condition is false. So we can
     combine between else and if -> else if is used to specify
      a new condition to test if the first condition is false.*/
   int a = 5;
   if (a > 0) {
       std::cout << "Positive";
   }
   else if (a < 0) {
       std::cout << "Negative";
   }
   else {
       std::cout << "Zero";
   }

   return 0;
}