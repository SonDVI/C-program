//Cho dãy số A[] gồm có N phần tử, bạn hãy trả lời các truy vấn để xác định xem phần tử X nào đó có nằm trong mảng hay không? Bạn hãy thử giải bài này bằng 3 cách : Set, Map, Binary Search.


#include <iostream>
#include <set>

using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<int> se;
    for(int i = 0; i < n; i++) {
        se.insert(a[i]);
    }
    int q; cin >> q;
    for(int i = 0; i < q; i++) {
        int x; cin >> x;
        auto it = se.find(x);
        if(it == se.end()) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}