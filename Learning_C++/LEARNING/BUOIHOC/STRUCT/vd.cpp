#include <bits/stdc++.h>
using namespace std;

struct Product{
    string id;
    string name;
    double price;
    void show() {
        cout << id << " " << name << " " << fixed << setprecision(2) << price << endl;
    }
    Product() {
        cout << "Ham tao khong co tham so!"; //constructor : Hàm tạo, không có giá trị trả về.
    }
    Product(string ma, string ten, int gia) {
        cout << "Ham tao day du tham so";
        id = ma; name = ten; price = gia;
    }
};
bool cmp(Product x, Product y) {
    return x.price > y.price;
}
int main() {
    int n; cin >> n;
    Product a[n];
    for(int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, a[i].id);
        getline(cin, a[i].name);
        cin >> a[i].price;
    }
    sort(a, a + n, cmp);
    for(Product x : a) {
        x.show();
    }
}