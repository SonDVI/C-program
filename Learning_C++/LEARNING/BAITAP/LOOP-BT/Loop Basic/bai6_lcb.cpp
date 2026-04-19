//[Vòng Lặp Cơ Bản]. Bài 6. Tổng độ chênh lệch
//Cho số nguyên N có ít nhất 2 chữ số, bạn hãy tính tổng độ chênh lệch giữa các chữ số đứng cạnh nhau của N.

#include <iostream>
#include <cmath>
using namespace std;

using ll = long long;

int main() {
    ll n; 
    cin >> n;
    
    // Lấy trị tuyệt đối ngay từ đầu để tránh lỗi khi N là số âm
    n = abs(n); 
    
    ll sum = 0;
    
    // Chỉ lặp khi N còn từ 2 chữ số trở lên
    while (n >= 10) {
        int a = n % 10;          // Chữ số cuối cùng
        int b = (n / 10) % 10;   // Chữ số áp chót
        
        sum += abs(a - b);       // Cộng độ chênh lệch vào tổng
        
        n /= 10;                 // Xóa chữ số cuối cùng để tiến sang trái
    }
    
    cout << sum << endl;
    
    return 0;
}