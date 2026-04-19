//Doremon muốn leo lên một cầu thang gồm n bước. Anh ta có thể leo 1 hoặc 2 bước mỗi lần di chuyển. Doremon muốn số lần di chuyển là bội số của một số nguyên m. Số lượng di chuyển tối thiểu làm cho anh ta leo lên đỉnh cầu thang thỏa mãn điều kiện của anh ta là gì?
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long sl_buoc = n / 2 + n % 2; // so luong buoc toi thieu de len cau thang.
    long long ketqua;
    if (sl_buoc % m == 0) {
            ketqua = sl_buoc;
    }      
    else {
            ketqua = (sl_buoc / m + 1) * m;
    }
    
    if (ketqua > n) {
        cout << -1 << endl; // nếu số lượng bước di chuyển tối thiu cần thiết để leo lên đỉnh cầu thang lớn hơn n, tức là số bước di chuyển tối thiểu không thể thực hiện được vì Doremon chỉ có thể leo 1 hoặc 2 bước mỗi lần di chuyển, nên ta in ra -1.
    }
    else {
        cout << ketqua << endl; 
    }
   
    
    return 0;
}