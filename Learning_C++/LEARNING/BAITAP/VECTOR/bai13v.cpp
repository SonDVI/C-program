#include <bits/stdc++.h>
using namespace std;

void nhap(vector<vector<int>> &v, int n, int m){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
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
