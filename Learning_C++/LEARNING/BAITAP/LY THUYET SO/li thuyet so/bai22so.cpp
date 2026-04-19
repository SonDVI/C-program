
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll a, b; cin >> a >> b;

    ll start = ceil(sqrt(a));
    ll end = floor(sqrt(b));
    ll dem = 0;
    /*for (ll i = start; i <= end; i++) {
        dem++;
    }*/
   ll sum = end - start + 1;
    //cout << dem << endl;

    cout << sum << endl;
    return 0;


    
}