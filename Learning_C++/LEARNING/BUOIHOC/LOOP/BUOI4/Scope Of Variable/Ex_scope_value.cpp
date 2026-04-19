#include <iostream>
using namespace std;

using ll = long long;

int main() {
    int a = 10, b = 20;
    {
        cout << a << " " << b << endl;
        //Print a = 10 and b = 20.
        ++a; // ++a cua local scope => a = 11.
        int a = 100;
        ++a; ++b; // ++a cua enclosing scope => a = 101, ++b cua local scope => b = 21.
        cout << a << " " << b << endl;
        //Print a = 101 and b = 21.
        {
            int b = 20;
            ++b;// ++b cua enclosing scope => b = 21.
            cout << a << " " << b << endl;
            //Print a = 101 and b = 21.
        }
    }
    cout << a << " " << b << endl; //Print a = 11 and b = 21.
    return 0;

    // =>> inside can be accessed outside but outside cannot be accessed inside.
}