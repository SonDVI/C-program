/*Cho input gồm nhiều dòng, mỗi dòng gồm nhiều ký tự viết cách nhau 1 dấu cách. Bạn hãy tiến hành lưu các ký tự này vào vector, sau đó những ký tự là in hoa thì đổi thành in thường, in thường thì đổi thành in hoa, chữ số thì giữ nguyên và in ra màn hình.

Bạn phải triển khai mã nguồn theo khuôn mẫu sau :

Copy
vector<char> nhap(){

}

vector<char> thaydoi(vector<char>){

}

void in(vector<char>){

}
int main(){
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);
}
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<char> nhap(){
    vector<char> v;
    char x;
    while(cin >> x) {
        v.push_back(x);
    }
    return v;

}

vector<char> thaydoi(vector<char> v){
    vector<char> res;
    for(int i = 0; i < v.size(); i++) {
        if(islower(v[i])) {
            res.push_back((char)toupper(v[i]));
        }
        else if(isupper(v[i])) res.push_back((char)tolower(v[i]));
        else if(isdigit(v[i])) res.push_back(v[i]);
        
    }
    return res;
}

void in(vector<char> res){
    for(auto x : res) {
        cout << x << " ";
    }
}
int main(){
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);
}
