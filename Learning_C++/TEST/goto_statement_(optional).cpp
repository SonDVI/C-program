#include <iostream>
using namespace std;

int main() {
    int PIN;
    cout << "Enter your PIN: ";
    cin >> PIN;
    if (PIN == 1234) {
        goto print;/*goto is a jump statement that allows you to jump
        to a specific Label in code, but it can make code harder to read
        and maintain. It's generally better to use structured control
        flow statements like if-else or loops instead of goto.*/}
    cout << "Invalid PIN";
    return 0;
print:
    cout << "Welcome!";
    return 1;
}