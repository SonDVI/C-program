#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    cout << "Please enter your name and age\n";
    string first_name = "???";
    int age = -1;

    cin >> first_name;
    if (!(cin >> age)) {               // đọc tuổi thất bại
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        age = -1;                      // giữ -1 theo mong muốn
    }

    cout << "Hello " << first_name << " (age " << age << ")\n";
}
