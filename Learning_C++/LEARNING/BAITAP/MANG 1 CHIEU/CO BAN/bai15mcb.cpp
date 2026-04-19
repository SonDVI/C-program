/* Cho mảng A[] gồm N ký tự, bạn hãy in ra các là nguyên âm theo thứ tự xuất hiện, các phụ âm bạn cần in theo thứ tự ngược với thứ tự xuất hiện. Biết rằng nguyên âm gồm các chữ cái 'u', 'e', 'o', 'a', 'i' ở dạng in hoa hoặc in thường. Ở đây các ký tự xuất hiện có thể là chữ cái in hoa hoặc in thường, nhưng khi in ra bạn cần phải in ra ở dạng in thường. Ngoài ra nguyên âm là chữ hoa hay chữ thường thì đều được coi là nguyên âm. */

#include <iostream>
using namespace std;
bool nguyen_am(char n) {
    if(n == 'u' || n == 'e' || n == 'o' || n == 'a' || n == 'i' || n == 'U' || n == 'E' || n == 'O' || n == 'A' || n == 'I') {
        return true;
    }
    return false;
}
int main() {
    int n; cin >> n;
    char a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(nguyen_am(a[i])) {
            cout << (char)tolower(a[i]) << " ";
        }
    }
    cout << endl;
    for(int i = n - 1; i >= 0; i--) {
        if(!(nguyen_am(a[i]))) {
            cout << (char)tolower(a[i]) << " ";
        }
    }
    return 0;
}