/*Cho 1 bảng số gồm N dòng và mỗi dòng gồm N số, nhiệm vụ của bạn là in ra những giá trị xuất hiện ở mọi dòng.

Gợi ý : Dùng map đánh dấu, dòng 1 : đánh dấu các giá trị ở dòng 1 có value = 1, dòng 2 sẽ kiểm tra giá trị nào được đánh dấu ở dòng 1 mới đánh dấu tại dòng 2, tương tự tới dòng n, những số nào được đánh dấu ở cả n dòng sẽ thỏa mãn yêu cầu.

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    map<int, int> appear;
    
    int temp = n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        appear[x] = 1;
    }
    
    for(int i = 1; i < n; i++) {
        set<int> tranhlap;
        for(int j = 0; j < n; j++) {
            int x; cin >> x;
            if(appear[x] == i && tranhlap.count(x) == 0) {
                appear[x]++;
                tranhlap.insert(x);
            } 
        }
    }
    bool found = false;
    for(auto it = appear.begin(); it != appear.end(); it++) {
        if(it->second == temp) {
            cout << it->first << " ";
            found = true;
        }
    }
    if(!found) cout << "NOT FOUND" << endl;
    return 0;
}