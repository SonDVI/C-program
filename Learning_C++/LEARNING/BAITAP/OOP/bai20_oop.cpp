
/*Cho lớp Sản phẩm (Product) gồm các thông tin :

Thuộc tính :

Id : String

name : String

importPrice : double

sellPrice : double

quantity : int

Phương thức :

toString() : Phương thức trả về thông tin của sản phẩm

getProfit() : Trả về lợi nhuận trên 1 sản phẩm bán ra

getTotalProfit() : Trả về lợi nhuận nếu bán toàn bộ sản phẩm còn trong kho

getInventoryValue() : Trả về giá trị tồn trong kho (quantity * import price).

Cho danh sách Sản phẩm, mỗi sản phẩm viên bao gồm thông tin về mã, tên sản phẩm, giá sản phẩm nhập, giá sản phẩm bán, số lượng sản phẩm có trong kho.

Bạn hãy xuất ra danh sách sản phẩm có trong kho theo giá trị tồn kho giảm dần, nếu 2 sản phầm có cùng giá trị tồn kho thì hãy in ra theo lợi nhuận trên 1 sản phẩm giảm dần.*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;


class Product {
    private :
    string id, name;
    double importPrice, sellPrice;
    int quantity;


    public :
    Product(string id, string name, double importPrice, double sellPrice, int quantity) {
        this->id = id;
        this->name = name;
        this->importPrice = importPrice;
        this->sellPrice = sellPrice;
        this->quantity = quantity;
    }

    double getProfit() {
        return sellPrice - importPrice;
    }
    double getTotalProfit() {
        double profit = getProfit();
        return profit * quantity;
    }
    double getInventoryValue() {
        return quantity * importPrice;
    }

    string tostring() {
        string s = to_string(getProfit());
        s = s.substr(0, s.find('.') + 3);
        string d = to_string(getTotalProfit());
        d = d.substr(0, d.find('.') + 3);
        string f = to_string(getInventoryValue());
        f = f.substr(0, f.find('.') + 3);

        string n = to_string(importPrice);
        n = n.substr(0, n.find('.') + 3);

        string m = to_string(sellPrice);
        m = m.substr(0, m.find('.') + 3);

        string q = to_string(quantity);


        return id + " " + name + " " + n + " " + m + " " + q + " " + s + " " + f;
    }

};
bool cmp(Product x, Product y) {
    if(x.getInventoryValue() != y.getInventoryValue()) return x.getInventoryValue() > y.getInventoryValue();
    return x.getProfit() > y.getProfit(); 
}

int main() {
    int n;
    int quantity;
    double gianhap, giaban;
    string id, ten;

    cin >> n;
    cin.ignore();
    vector<Product> v;
    while(n) {
        getline(cin, id);
        getline(cin, ten);

        cin >> gianhap >> giaban >> quantity;
        cin.ignore();
        Product p(id, ten, gianhap, giaban, quantity);  
        v.push_back(p);
        --n;
    }
    sort(v.begin(), v.end(), cmp);
    for(Product x : v) {
        cout << x.tostring() << endl;
    }

}