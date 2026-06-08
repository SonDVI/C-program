#include <bits/stdc++.h>
using namespace std;

struct Product{
    string id;
    string name;
    double price;
    void show() {
        cout << id << " " << name << " " << fixed << setprecision(2) << price << endl;
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