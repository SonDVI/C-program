#include <iostream>
using std::cout;
using std::cin;

int main() {
    int a = 5;
    /*switch statement is the same with if-else statement,
    but it is more elegant and easier to read ( so whenever you have
    multiple conditions to check, you can use switch instead of if-else). We use
    switch (expression) {
        case value1:
            // code to be executed if expression == value1
            break;
        case value2:
            // code to be executed if expression == value2
            break;
        ...
        default:
            // code to be executed if expression doesn't match any case
            break;
    }*/
    switch (a+1) {
        case 6:
            cout << "Cool";
            break;
        case 10:
            cout << "Awesome";
            break;
        default:
            cout << "Unknown";
            break;
    }
}