#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//sap xep theo tong chu so tang dan, neu 2 so co cung tong chu so
// thi so nho hon se dung truoc(2)

int tongcs(int n) {
    int sum = 0;

    while(n) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

bool cmp(int x, int y) {
    if(tongcs(x) != tongcs (y)) {
        return tongcs(x) < tongcs(y);
    }
    else return x < y;
}

int main() {
        int a[] = {3, 2, 1, 5, 8, 9, 4, 7, 10, 6};
    int n = 10;

    sort(a, a + n, cmp);
    for(auto x : a) {
        cout << x << " ";
    }
}