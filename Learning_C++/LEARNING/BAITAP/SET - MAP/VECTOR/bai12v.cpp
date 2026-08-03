/*Bạn hãy tự code hàm lật ngược 1 vector theo khuôn mẫu hàm main như sau :

Copy
void rev(vector<int> &v){

}

int main(){
    vector<int> v;
    nhap(v);
    rev(v);
    in(v);
}*/
#include <bits/stdc++.h>

using namespace std;

void res(vector<int> &v) {
    for(auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }
}
int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    res(v);


    return 0;
}