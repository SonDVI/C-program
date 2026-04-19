//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.
#include <iostream>
using namespace std;
using ll = long long;


int main() {
    ll F[100];
    F[0] = 0;
    F[1] = 1;
    int n; cin >> n;
    for(int i = 2; i <= 92; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }

    
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool found = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= 92; j++) {
            if(a[i] == F[j]) {
                cout << F[j] << " ";
                found = true;
                break;
            }
        }
    }
    if(!found) cout << "NONE" << endl;
    return 0;
}