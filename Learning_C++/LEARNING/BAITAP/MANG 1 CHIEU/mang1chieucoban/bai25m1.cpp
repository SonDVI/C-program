//Cho mảng số nguyên A[] có không quá 10000 phần tử. Hãy xác định xem mảng là mảng chẵn hay mảng lẻ, mảng chẵn được định nghĩa là mảng mà số lượng số chẵn nhiều hơn số lượng số lẻ, ngược lại. Trong trường hợp số lượng số chẵn bằng số lượng số lẻ thì mảng được gọi là mảng chẵn lẻ.
#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int a[10001];
    int n;
    while (cin >> n) {
        a[x] = n;
        ++x;
    }
    int demchan = 0;
    int demle = 0;
    for(int i = 0; i < x; i++) {
        if(a[i] % 2 == 0) {
            ++demchan;
        }
        else {
            ++demle;
        }
    }
    if(demchan > demle) {
        cout << "CHAN" << endl;
    }
    else if(demle > demchan) {
        cout << "LE" << endl;
    }
    else {
        cout << "CHANLE" << endl;
    }
}