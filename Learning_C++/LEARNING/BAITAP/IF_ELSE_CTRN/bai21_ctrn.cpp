/*Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. Nó nhảy theo thuật toán sau: bước nhảy thứ nhất là a đơn vị về bên phải, bước nhảy thứ hai là b đơn vị về bên trái, bước nhảy thứ ba là a đơn vị bên phải, bước nhảy thứ tư là b đơn vị bên trái, v.v.

.Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại), nó nhảy từ vị trí hiện tại x sang vị trí x + a, mặt khác, nó nhảy từ vị trí hiện tại x sang vị trí x - b. Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, k;//a: bước nhảy bên phải, b: bước nhảy bên trái, k: số bước nhảy
    cin >> a >> b >> k;
    
    int sc = 0;
    int sl = 0;
    if (k % 2 == 0) {
        sc = sl = k / 2;//số bước nhảy bên phải và bên trái bằng nhau
    }
    else {
        sc = k / 2;//số bước nhảy bên trái ít hơn số bước nhảy bên phải 1 bước
        sl = k / 2 + 1;
    }
    cout << sl * (long long)a - (long long)b * sc << endl; //vị trí của ếch sau k bước nhảy
    return 0;
}