#include <iostream>
using namespace std;
void happybirthday(string name, int age);

int main()
{
    // function = block of reusable code
    string name = "Son";
    int age = 18;
    happybirthday(name, age);
    return 0;
}
void happybirthday(string name, int age) /*when you want to use code in other function in another one you have to indetified it in that another one function*/
{
    cout << "Happy birthday to you!" << endl;
    cout << "Happy birthday to you!" << endl;
    cout << "Happy birthday dear " << name << endl;
    cout << "Happy birthday to you!" << endl;
    cout << "You are now " << age << " years old!" << endl;
}