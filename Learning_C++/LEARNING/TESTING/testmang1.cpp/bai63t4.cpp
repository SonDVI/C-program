//Cho mảng A[] gồm N phần tử và nhiều truy vấn, mỗi truy vấn yêu cầu bạn đếm số lượng giá trị khác nhau trong đoạn từ chỉ số 0 tới chỉ số K.
#include <iostream>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }


    int q; cin >> q;
    int k = 0;
    for(int i = 1; i <= q; i++) {
        cin >> k;
        int dem = 0;
        for(int i = 0; i <= k; i++) {
            bool lap = false;
            for(int j = i - 1; j >= 0; j--) {
                if(a[i] == a[j]) {
                    lap = true;
                    break;
                }
            }  
            if(!lap) {
                ++dem;
            } 

        }
        cout << dem << endl;
    }

}