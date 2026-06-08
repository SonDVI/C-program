/*Cho mảng A[] gồm N phần tử, bạn hãy sắp xếp các phần tử trong mảng theo yêu cầu như sau :

• Sắp xếp số lượng chữ số chẵn xuất hiện trong số tăng dần, nếu 2 số còn cùng số lượng chữ số chẵn thì số nhỏ hơn in trước.

• Sắp xếp theo số lượng chữ số lẻ xuất hiện trong số ban đầu tăng dần, nếu 2 số có cùng số lượng chữ số lẻ thì số nào xuất hiện trước sẽ in ra trước. Ở yêu cầu thứ 2 này bạn cần dùng stable_sort và áp dụng trên mảng ban đầu.*/
#include <bits/stdc++.h>
using namespace std;
int chu_so_chan(int n) {
    int count = 0;
    while(n) {
        int digit = n % 10;
        if(digit % 2 == 0) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int chu_so_le(int n) {
    int count = 0;
    while(n) {
        int digit = n % 10;
        if(digit % 2 != 0) {
            count++;
        }
        n /= 10;
    }
    return count;
}

bool cmprs(int x, int y) {
    if(chu_so_chan(x) != chu_so_chan(y)) return chu_so_chan(x) < chu_so_chan(y);
    else return x < y;
}
bool cmprs1(int x, int y) {
    return chu_so_le(x) < chu_so_le(y);
}

int main() {
    int n; cin >> n; 
    int a[n];
    int b[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a, a + n, cmprs);
    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    stable_sort(b, b + n, cmprs1);

    for(int x : b) {
        cout << x << " ";
    }
    return 0;
}