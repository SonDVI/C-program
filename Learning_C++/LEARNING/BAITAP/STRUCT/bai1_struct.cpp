#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct Phan_So {
    int ts;
    int ms;
};

int ucln(int a, int b) {
    int a1 = abs(a);
    int b1 = abs(b);

    while(b1 != 0) {
        int temp = b1;
        b1 = a1 % b1;
        a1 = temp;
    }
    return a1;
}

void toigian(Phan_So &p) {
    int u = ucln(p.ts, p.ms);
    p.ms /= u;
    p.ts /= u;

    if(p.ms < 0) {
        p.ts = -p.ts;
        p.ms = -p.ms;
    }
}

void print(Phan_So &p) {
    cout << p.ts << '/' << p.ms << endl;
}

void tong(Phan_So &p, Phan_So &n, Phan_So &k) {
    int tong_tu = p.ts * n.ms + n.ts * p.ms;
    int tong_mau = p.ms * n.ms;
    k.ts = tong_tu;
    k.ms = tong_mau;
}
void hieu(Phan_So &p, Phan_So &n, Phan_So &k) {
    int hieu_tu = p.ts * n.ms - n.ts * p.ms;
    int hieu_mau = p.ms * n.ms;
    k.ts = hieu_tu;
    k.ms = hieu_mau;
    
}
int main(){
    Phan_So p;
    cin >> p.ts;
    cin >> p.ms;


    Phan_So n;
    cin >> n.ts >> n.ms;

    Phan_So k;
    ucln(p.ts, p.ms);
    ucln(n.ts, n.ms);
    toigian(p);
    toigian(n);

    print(p);
    print(n);

    tong(p, n, k);
    ucln(k.ms, k.ts);
    toigian(k);
    print(k);

    hieu(p, n, k);
    ucln(k.ms, k.ts);
    toigian(k);
    print(k);
    return 0;
}
