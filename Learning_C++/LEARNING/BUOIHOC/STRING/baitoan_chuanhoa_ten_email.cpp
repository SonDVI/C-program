/*
                CHUẨN HÓA TÊN VÀ EMAIL VỀ DẠNG CHUẬN
    VÍ DỤ :
        nguyen VAN  Thuy PhuONG --> Nguyen Van Thuy Phuong
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    string res = "";

    while(ss >> temp) {
        res += toupper(temp[0]); // temp[0] truy cập vào phần tử đầu tiên (char);
        for(int i = 1; i < temp.size(); i++) {
            res += tolower(temp[i]);
        }
        res += " ";
    }
    res.pop_back();
    cout << res << endl;

    //email

    for(char &x : s) {
        x = tolower(x);
    }
    
    stringstream ss1(s);

    string temp1;
    vector<string> v;
    while(ss1 >> temp1) {
        v.push_back(temp1);
    }
    string email = v.back();
    for(int i = 0; i < v.size() - 1; i++) {
        email += v[i][0]; // lấy chỉ số 0 (char đầu) của thằng string trong vector
    }
    email += "@gmail.com";
    cout << email << endl;


    
}