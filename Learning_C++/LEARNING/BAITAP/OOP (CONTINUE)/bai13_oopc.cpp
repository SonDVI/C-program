#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <climits>
#include <cmath>
#include <numeric>
using namespace std;
using ll = long long;

class PHANSO{
private:
    ll ts, ms;
public:
    PHANSO(ll, ll);
    void toi_gian();
    PHANSO c(PHANSO);
    PHANSO d(PHANSO, PHANSO);
    void show();
};

PHANSO::PHANSO(ll ts, ll ms) {
    this->ts = ts;
    this->ms = ms;
}

void PHANSO::toi_gian() {

    if(ms < 0) {
        ts = -ts;
        ms = -ms;
    }
    ll ucln = gcd(abs(ts), abs(ms));
    ts /= ucln;
    ms /= ucln;


}

PHANSO PHANSO::c(PHANSO b) {
    ll ts1, ms1;
    ts1 = ts * b.ms + b.ts * ms;
    ms1 = ms * b.ms;
    PHANSO c(ts1 * ts1, ms1 * ms1);
    c.toi_gian();
    return c;
}

PHANSO PHANSO::d(PHANSO b, PHANSO c) {
    ll ts2, ms2;
    ts2 = ts * b.ts * c.ts;
    ms2 = ms * b.ms * c.ms;
    PHANSO d(ts2, ms2);
    d.toi_gian();
    return d;
}

void PHANSO::show() {
    cout << ts << '/' << ms << " ";
}

int main() {
    int n; cin >> n;
    while(n) {
        ll ts1, ms1, ts2, ms2;
        cin >> ts1 >> ms1 >> ts2 >> ms2;
        PHANSO a(ts1, ms1);
        PHANSO b(ts2, ms2);
        a.toi_gian();
        b.toi_gian();
        PHANSO res1 = a.c(b);
        res1.show();
        PHANSO res2 = a.d(b, res1);
        res2.show();
        cout << endl;
        --n;
    }
    return 0;
}
