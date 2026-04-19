//WHILE

#include <iostream>
using namespace std;

int main() {
    int k = 10;
    while (k != 0 /*condition*/) {
        cout << k << endl;
        k--;
    }
    cout << "done" << k << endl; // khi k đạt đến 0, điều kiện trong while sẽ trở thành false, và vòng lặp sẽ kết thúc. Sau đó, chương trình sẽ in ra "done" và giá trị của k, kết quả sẽ là "done0".
    return 0;
}