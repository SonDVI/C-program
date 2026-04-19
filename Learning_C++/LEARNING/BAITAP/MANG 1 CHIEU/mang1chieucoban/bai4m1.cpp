
#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x; cin >> x;
    int dem1 = 0;
    int dem2 = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < x) {
            dem1++;
        }
        if(a[i] > x) {
            dem2++;
        }
    }
    cout << dem1 << endl;
    cout << dem2 << endl;
    return 0;
}