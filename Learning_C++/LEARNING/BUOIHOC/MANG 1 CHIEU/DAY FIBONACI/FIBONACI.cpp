/*
     - dãy fibonaci : 0 1 1 2 3 5 8 13 21 34.....


     Fn = Fn-1 + Fn - 2;

     - thường có ba câu hỏi
        +> có phải fibonaci
        +> tìm n = ?
        +>
*/

#include <iostream>
using namespace std;
using ll = long long;


int main() {
    ll F[100];
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
    //for(int i = 0; i <= 92; i++) {
        //cout << F[i] << endl;
    //}

    ll n; cin >> n;
    for(int i = 0; i <= 92; i++) {
        if(F[i] == n) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}