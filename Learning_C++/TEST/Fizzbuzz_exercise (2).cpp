/*Though this challenge may appear simple to experienced coders, it is designed to weed out 90% of job candidates who cannot apply their coding knowledge to a new problem creatively. Want to give it a try?

Create a fizz_buzz.cpp program that outputs numbers from 1 to 100.

Here's the catch:

For multiples of 3, print "Fizz" instead of the number.
For multiples of 5, print "Buzz" instead of the number.
Here's the tricky part: For multiples of 3 and 5, print "FizzBuzz".
The output should look like:

1 
2 
Fizz 
4 
Buzz 
Fizz 
7 
8 
Fizz 
Buzz 
11 
Fizz 
13 
14 
FizzBuzz
...*/
#include <iostream>
int main() {
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 and i % 5 == 0)
        {
            std::cout << "\nFizzBuzz";
        }
        else if (i % 5 == 0) {
            std::cout << "\nFizz";
        }
        else if (i % 3 == 0) {
            std::cout << "\nBuzz";
        }
        else {
            std::cout << "\n" << i;
        }
    }
    
}