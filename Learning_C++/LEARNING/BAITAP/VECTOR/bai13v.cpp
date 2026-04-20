/*Cho 1 bảng số có N dòng và M cột, bạn hãy lưu bảng số này vào một vector các vector dạng vector> trong đó mỗi hàng của bảng số bạn lưu vào 1 vector. Hãy lật ngược từng dòng của bảng số sau đó in ra màn hình.*/
#include <bits/stdc++.h>
using namespace std;

void nhap(vector<vector<int>> &v, int n, int m){
    for(int i = 0; i < n; i++) {
        vector<int> row;
        for(int j = 0; j < m; j++) {
            int x; cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }
}

void xuat(vector<vector<int>> v, int n, int m){
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;   
    }
}

void lat(vector<vector<int>> &v, int n, int m){
    for(int i = 0; i < n; i++) {
        reverse(v[i].begin(), v[i].end());
    }
}

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> v;
    nhap(v, n, m);
    lat(v, n, m);
    xuat(v, n, m);
}
