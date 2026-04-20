/*Cho vector gồm N số, bạn hãy viết 1 hàm trả về 1 vector có được từ vector đầu vào bằng cách xóa đi các phần tử đứng cạnh mà giống nhau. Lưu ý sau khi xóa 1 phần tử trong vector thì phần tử đứng trước và đứng sau phần tử vừa xóa lại được coi là đứng cạnh nhau.*/
#include <bits/stdc++.h>
using namespace std;
vector<int> unique_vector(vector<int> v){
    
    bool changed = true;
    while(changed) {
        changed = false;
        for(int i = 0; i < v.size() - 1; i++) {
            if(v[i] == v[i + 1]) {
                v.erase(v.begin() + i);
                changed = true;
                break;
            }
        }
    }
    return v;
}

vector<int> nhap(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    return v;
}

void in(vector<int> v){
    for(auto x : v) {
        cout << x << " ";
    }
}

int main() {
    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);
    return 0;
}