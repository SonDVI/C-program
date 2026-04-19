
#include <iostream>

using namespace std;

#define ll long long

void displayNumber(ll x, ll y, ll z){
    cout << y << " " << x << " " << z << endl;
    cout << x + y + z << endl;
    cout << "KET THUC !" << endl;
    //code here
}

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    displayNumber(a, b, c);
    return 0;
}
