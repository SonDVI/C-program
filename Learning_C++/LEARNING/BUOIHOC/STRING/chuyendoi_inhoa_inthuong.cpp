/*
                        CHUYỂN ĐỔI IN HOA & IN THƯỜNG

    1. Hàm kiểm tra kí tự : 
    Ở bài if else các bạn đã học cách tự viết các câu lệnh if để kiểm tra loại kí tự, bây giờ các bạn có thể sử dụng các hàm có sẵn trong thư viện <ctype.h>.

                    Hàm                                     functional
                isdigit(char c)                           kiểm tra chữ số
                islower(char c)                           kiểm tra chữ in thường
                isupper(char c)                           kiểm tra in hoa
                isalpha(char c)                           kiểm tra chữ cái
                int tolower(char c)                       chuyển thành chữ in thường
                int toupper(char c)                       chuyển thành chữ in hoa      
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    string s = "nGUYEN VaN NAm di hoc 123 @@@@";
    for(char &x : s) x = tolower(x); //toupper
    cout << s << endl;
}