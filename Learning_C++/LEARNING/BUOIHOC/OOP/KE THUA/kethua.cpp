/*
                                KẾ THỪA (INHERITANCE)
    - Inheritance (Tính kế thừa) trong C++ là một khái niệm cốt lõi của Lập trình hướng đối tượng (OOP). Nó cho phép một lớp mới (gọi là lớp con hoặc lớp dẫn xuất) tự động sử dụng lại, mở rộng và sửa đổi các thuộc tính, phương thức từ một lớp đã tồn tại (gọi là lớp cha hoặc lớp cơ sở) mà không cần phải viết lại code.
    
    
    2.Syntax : 
        class derived_class : access_mode base_class{}


*/
#include <bits/stdc++.h>
using namespace std;

//2.Syntax :
class Person{
private:
    string name, birth, address;
};

class Student : public Person{ //dù student có thuộc tính name, birh, address nhưng không thể truy cập trực tiếp bởi những thông tin này là private ở hàm cha
private:
    string className;
    double gpa;
};

//3. Protected : Cho Phép truy cập ở lớp đặt protected và lớp con của nó cũng có thể truy cập. Chỉ có lớp Cha-Con-Cháu mới có thể truy cập vào thằng có thuộc tính protected.
class Person2{
protected:
    string name, dateOfBirth;
public:
    //Hàm tạo lớp cha
    Person2(string name, string dateOfBirth) {
        this->name = name;
        this->dateOfBirth = dateOfBirth;
    }

    void show() {
        cout << name << " " << dateOfBirth << endl;
    }
};

class Customer : public Person2{
private:
    string id;
public:
    //Hàm tạo lớp con
    Customer(string name, string dateOfBirth, string id) : Person2(name, dateOfBirth) {
        //phải gọi hàm tạo của lớp cha trước để truyền thuộc tính lớp cha để khởi tạo.
        this->id = id;
    }


    void A() {
        cout << name << " " << dateOfBirth << endl;
    }

    //ghi đè hàm
    void show() {
        cout << id << " ";
        Person2::show();// gọi hàm của lớp cha
    }
};

int main() {
    Customer c("Nam", "22/10/2007", "CUS101");
    c.show(); // chỉ show tên và dateofbirth
    return 0;

}

