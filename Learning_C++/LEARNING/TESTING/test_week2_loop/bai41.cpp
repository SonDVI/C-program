/*
Một số nguyên dương N được gọi là số đẹp nếu nó thỏa mãn đồng thời những điều kiện sau :

Có số lượng chữ số là số lẻ

Không có chữ số nào của N được lớn hơn chữ số đứng giữa
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

bool demsole(int n) {
    int dem = 0;
    int soluong = 0;
    while (n != 0) {
        int digit = n % 10;
        dem++;
        n /= 10;
    }
    if (dem % 2 != 0) {
        return true;
    }
    else {
        return false;
    }
}

bool sogiuamax(int n) {
    if (demsole(n)) {
        int dem = 0;
        int temp = n;
        while (n != 0) {
            int digit = n % 10;
            dem++;
            n /= 10;
        }
        int vitri_digitmax = dem / 2 + 1;
        int digitmax = (temp / (ll)pow(10, dem - vitri_digitmax)) % 10;
        while (temp != 0) {
            int digit2 = temp % 10;
            if (digit2 > digitmax) {
                return false;
            }
            temp /= 10;
        }
        return true;

    }
    else {
        return false;
    }
}

int main() {
    int a, b; cin >> a >> b;
    bool found = false;
    for (int i = a; i <= b; i++) {
        if (sogiuamax(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "28tech" << endl;
    }
    return 0;
}

