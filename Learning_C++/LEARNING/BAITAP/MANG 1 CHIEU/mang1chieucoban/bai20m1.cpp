
#include <iostream>
using namespace std;

bool checkbenphai_bentrai(int n, int a[], int i) {

    return (a[i] > a[i + 1]) && (a[i] > a[i - 1]);
    
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i < n - 1; i++) {
        if(checkbenphai_bentrai(n, a, i)) {
            cout << a[i] << " ";
        }
    }
    return 0;
}