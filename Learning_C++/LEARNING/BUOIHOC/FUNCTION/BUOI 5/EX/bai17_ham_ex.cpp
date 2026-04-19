#include <iostream>
using namespace std;
using ll = long long;



bool check2(int n) {
    int digit = 0;
    int sum = 0;
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    int r = sum % 10;
    return r == 2 || r == 3 || r == 5 || r == 7;
    
}

int main() {
    int a, b;
    cin >> a >> b;
    bool found = false;
    for (int i = a; i <= b; i++) {
        if (check2(i)) {
            cout << i << " ";
            found = true;
        }
        
    }
    if (!found) {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}