#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    int a = 1;
    int so = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        so = i;
        for (int j = 1; j <= n; j++) {
            cout << so << " ";
            so++;
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n -i; j++) {
            cout << "~";
        }
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;
    int step = 0;
    for (int i = 1; i <= n; i++) {
        int start_value = i; step = n - 1;
        for (int j = 1; j <= i; j++) {
            cout << start_value << " ";
            start_value += step;
            step--;
        }
        cout << endl;

    } 
    cout << endl;
    return 0;  
}