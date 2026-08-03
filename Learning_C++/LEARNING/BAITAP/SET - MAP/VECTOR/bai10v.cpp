/*Sử dụng vector và pair để giải quyết bài toán sau. Cho mảng A[] gồm N kí tự, bạn hãy đếm xem mỗi phần tử trong mảng A[] xuất hiện bao nhiêu lần và in ra theo thứ tự xuất hiện trong mảng A[].

Hướng dẫn : Các bạn sử dụng 1 vector rỗng lưu pair<char, int> trong đó first của pair lưu giá trị và second lưu tần suất, mỗi khi gặp 1 phần tử trong mảng A[] bạn hãy duyệt vector đã có và kiểm tra xem giá trị này đã xuất hiện chưa, nếu đã xuất hiện bạn tăng second của nó lên còn nếu chưa xuất hiện thì bạn push_back 1 cặp pair mới vào vector, pair này sẽ lưu giá trị bạn đang xét và tần suất là 1.*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    char a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    vector<pair<char, int>> v;

    for(int i = 0; i < n; i++) {
        bool check = false; 
        for(int j = 0; j < v.size(); j++) {
            if(v[j].first == a[i]) {
                v[j].second++;
                check = true;
                break;
            }
        }
        if(!check) v.push_back({a[i], 1});
    }
    int count = 0;
    for(auto it = v.begin(); it != v.end(); it++) {
        count++;
    }             
    cout << count << endl;                                           
    for(auto x : v) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}