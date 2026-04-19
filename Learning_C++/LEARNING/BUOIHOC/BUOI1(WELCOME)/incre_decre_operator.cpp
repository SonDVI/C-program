//INCREMENT AND DECREMENT OPERATOR
#include <iostream>

using namespace std;

int main() {
    int n = 100;
    --n; // giảm trước khi sử dụng, n sẽ giảm xuống còn 99 trước khi được in ra. Kết quả sẽ là 99.
    cout << n << endl;

    n--; // giảm sau khi sử dụng, n sẽ được in ra trước khi giảm xuống. Kết quả sẽ là 99, sau đó n sẽ giảm xuống thành 98.
    cout << n << endl;

    ++n; // tăng trước khi sử dụng, n sẽ tăng lên thành 99 trước khi được in ra. Kết quả sẽ là 99.
    cout << n << endl;

    n++; // tăng sau khi sử dụng, n sẽ được in ra trước khi tăng lên. Kết quả sẽ là 100, sau đó n sẽ tăng lên thành 101.
    cout << n << endl;

    int k = 100;
    int z = k++; // z sẽ nhận giá trị của k trước khi k tăng lên, nên z sẽ có giá trị là 100, sau đó k sẽ tăng lên thành 101.
    cout << z << endl; // in ra giá trị của z, kết quả sẽ là 100.
    cout << k << endl; // in ra giá trị của k, kết quả sẽ là 101.

    int u = 100;
    int y = ++u; // y sẽ nhận giá trị của u sau khi u tăng lên, nên y sẽ có giá trị là 101.
    cout << y << endl; // in ra giá trị của y, kết quả sẽ là 101.
    cout << u << endl; // in ra giá trị của u, kết quả sẽ là 101.


    int a = 1000, b = 2000;
    int l = ++a; // u =1001 , l = 1001
    int m = a++ + ++b; // 1001 + 2001 = 3002, u =1002, v = 2001. 
    cout << l << endl; // in ra giá trị của l, kết quả sẽ là 1001.
    cout << m << endl; // in ra giá trị của m, kết quả sẽ là 3002.

    cout << a << " " << b << " " << l << " " << m << endl; // in ra giá trị của a, b, l, m. Kết quả sẽ là 1002 2001 1001 3002.
    return 0;
}