#include <iostream>
using namespace std;
int tonguoc(int n) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res += i;
    }
    return res;
}
int main() {
    int n, m; cin >> n >> m;

    //O(n * m) = O(n^2) nếu n = m.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Code bên trong vòng lặp có độ phức tạp O(1)
        }
    }

    //O(n * m * tonguoc(n)).
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << tonguoc(i) << endl;
        }
    }
}