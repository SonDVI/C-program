/*
    Độ phức tạp của vòng lặp chính là số lượng của lặp của vòng lặp nhân với độ phức tạp của code bên trong vòng lặp. 

        Các code sau đều có độ phức tạp là O(n)
            (Nếu vòng lặp là đơn và code bên trong có độ phức tạp O(1))
*/
#include <iostream>
using namespace std;
//O(n)
int tonguoc(int n) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res += i;
    }
    return res;
}



int main() {
    int n = 1000;
    for (int i = 1; i <= n; i++) {
        // Code bên trong vòng lặp có độ phức tạp O(1)
    }

    /*              OR
    
    while (i <= n) {
        // Code bên trong vòng lặp có độ phức tạp O(1)
 
    }
    */


    //Nếu có cộng thêm hoặc nhân thêm với hệ số ở n thì độ phức tạp vẫn được coi là O(n). VD:   O(n+100) = O(n / 2) = O(n).
    
    
    //độ phức tạp nếu chứa hàm khác :

    // O(n * tonguoc(n)) = O(n * n) = O(n^2) vì độ phức tạp của hàm tonguoc(n) là O(n).
    for (int i = 0; i < n; i++) {
        cout << tonguoc(i) << endl; 
    }

    return 0;
}