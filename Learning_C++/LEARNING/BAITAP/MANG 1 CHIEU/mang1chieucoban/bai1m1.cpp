#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int demle = 0;
    int demchan = 0;
    int sumchan = 0;
    int sumle = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            ++demchan;
            sumchan += a[i];
        }
        else {
            ++demle;
            sumle += a[i];
        }
    }
    cout << demchan << endl;
    cout << demle << endl;
    cout << sumchan << endl;
    cout << sumle << endl;

    return 0;
}