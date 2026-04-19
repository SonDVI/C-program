#include <iostream>
using namespace std; /*namespace is a private region that allows you
to use the same function name in different libraries without any conflict*/


/*using namespace std; is making code more cleaner
without repeating the std:: prefix for every standard library function call*/

/*in program, we should use using std::cout or using std::cin instead of using namespace
std; for not conflict with other libraries*/

/* using statement is a way to code cleaner and more concise
by allowing you to use specific names from a namespace without the prefix*/

int main () {
    cout << "Hello, World!";
}

