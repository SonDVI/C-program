//SCOPE OF VARIABLES

// Global >> Local >> Enclosing Scope
//Priority: Enclosing Scope > Local > Global

//Using to avoid name conflict, we can use the same name for different variables in different scopes. This is called variable shadowing.
#include <iostream>

using namespace std;


int n = 1000; // biến toàn cục = global variable.

int main() {

    cout << n << endl; // in ra giá trị của biến n trong phạm vi toàn cục, kết quả sẽ là 1000.

    int n = 100; // biến cục bộ = local variable, có phạm vi sử dụng chỉ trong hàm main. Biến cục bộ này sẽ che khuất (shadow) biến toàn cục n khi được sử dụng trong hàm main.

    if (true) {
        cout << n << endl; // in ra giá trị của biến n trong phạm vi của hàm main, kết quả sẽ là 100.


        int n = 10; //Enclosibg scope: phạm vi của biến n này chỉ tồn tại trong khối lệnh if. Biến n này sẽ che khuất (shadow) cả biến cục bộ n và biến toàn cục n khi được sử dụng trong khối lệnh if.


        cout << n << endl; // in ra giá trị của biến n trong phạm vi của khối lệnh if, kết quả sẽ là 10.

        int k = 10; // biến cục bộ k chỉ tồn tại trong khối lệnh if, không thể truy cập được từ bên ngoài khối lệnh này.
    }
    //cout << k << endl; (error)


    /* for (int i = 0; i < 5; i++) {
            Code//
    } */

    
    //cout << i << endl; (error) Biến i chỉ tồn tại trong phạm vi của vòng lặp for, không thể truy cập được từ bên ngoài vòng lặp này.
}