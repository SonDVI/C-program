/*
                    TÁCH CHUỖI
    - SỬ DỤNG STRINGSTREAM
    syntax : stringstream ss(chuỗi cần tách),
    - tương tự cin có điều cin là luồng từ bản phím, còn stringstream ss là đọc từ luồng chuỗi ta gán cho nó.
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    string s = "500 nguyen VAN nam di hoc them ";
    stringstream ss(s);
    string tmp;
    int n;
    ss >> n;
    cout << n << endl;
    while(ss >> tmp) { //tự tách dấu cách
        cout << tmp << endl;
    }



    string s1 = "22/12/2002";
    stringstream ss1(s1); //luu nhu phải khai báo biến mới
    int ngay, thang, nam;
    char c;
    ss1 >> ngay >> c >> thang >> c >> nam;
    cout << ngay << " " << thang << " " << nam;
    cout << endl;


    //trường hợp tách mà gặp không phải khoảng trắng mà là dấu khác
    string s2 = "500....nguyen.VAN.nam...di..hoc.them..";
    stringstream ss2(s2);
    string tmp2;
    while(getline(ss2, tmp2, '.')) { // tham số thứ 3 là nó coi đó là ngăn cách giữa 2 kí tự. Lưu ý giữa 2 dấu chấm getline sẽ coi đó là 1 xâu rỗng
        if(tmp2 != "")  cout << tmp2 << endl;
    }
    cout << endl;

    //trường hợp có nhiều dấu khác nhau
    string s3 = "500.?!nguyen.VAN      nam,!di..hoc.them..";
    for(char &x : s3) {
        if(x == '.' || x == '?' || x == '!' || x == ',') x = ' ';
    }
    stringstream ss3(s3);   
    string tmp3;
    while(ss3 >> tmp3) {
        cout << tmp3 << endl;   
    }

}