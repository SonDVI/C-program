
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool sotang(int n) {
    
    while (n >= 10) {
        int digit = n % 10;
        int first_digit = n % 100 / 10;
        if (digit <= first_digit) {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(sotang(i)){
            cout << i << " ";
        }
    }
    return 0;
}

