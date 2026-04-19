#include <iostream>
int main() {
    int PIN;
    std::cout << "Enter your PIN: ";
    std::cin >> PIN;
    while (PIN != 1234) {//while is a loop that continues until the condition is false
        std::cout << "Incorrect PIN. Please try again!";
        std::cout << "\nEnter your PIN: ";
        std::cin >> PIN;
    }
    std::cout << "Access granted!";

    return 0;
}