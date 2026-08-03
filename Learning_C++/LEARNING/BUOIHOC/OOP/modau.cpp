/*
                    Hướng Đối Tượng 
                Object Oriented Programming
    - OOP là một mô hình lập trình quan trọng, được ứng dụng rộng rãi trong phát triển phần mềm. OOP tập trung xoay quanh dữ liệu và đối tượng thay vì tập trung vào thủ tục và hàm như các mô hình lập trình truyền thống.



    1. Class và Object :
    - Hai khái niệm quan trọng của oop : Lớp (Class) và đối tượng (Object).
    - Mục tiêu của OOP đó là cố gắng đưa các thự thể, đối tượng trong thực tế vào phần mềm. Ví dụ : phần mềm của bạn cần quản lý những đối tượng như Người, Xe, Sách thì khi đó các đối tượng này cũng được xây dựng trong phần mềm của bạn dưới dạng các lớp.

    --> Có thể hiểu đơn giản, lớp chính là bản mô phỏng của một đối tương trong thực tế.

    2.Thuộc tính và phương thức : 
    - Để mô tả thông tin của một lớp, bạn cần bổ suung các thuộc tính (Attribute, Data Field) và các phương thức (Method)

    VD : 
                Lớp Person cần: 
    - thông tin : tên, ngày sinh, số điện thoại, địa chỉ --> đây là các thuộc tính cần bổ sung cho lớp.

    - Hành động : Đi lại, Ăn uống, Giao tiếp --> đây là các phương thức cần bổ sung cho lớp.
    

    3. Xây dựng lớp: 
    - Trong class sẽ chứa các member có thể là thuộc tính hoặc phương thức. Khi khai báo các member này thì bạn phải chỉ ra access_specifier cho các thành phần này.

    - Các access_specifier (tạm dịch là quyền truy cập) : public, protected, private.
*/



#include <bits/stdc++.h>
using namespace std;

using ll = long long;

//Đóng gói : Encapsulation --> đảm bảo tính đóng gói thì thông tin để private còn method để public.
/*get & set : cặp đôi lấy và đặt sử dụng cho tên hàm. Get là hàm return còn set là hàm thay đổi nên cần truyền tham số vào nó.*/
class Product{
    private : // ra ngoai lop nay khong truy cap duoc vi no la private.
    string id, name;
    double price;


    public : //public thi truy cap thoai mai ngoai lop.

    Product() {
        cout << "Ham tao duoc goi !\n";
        id = "101"; name = "laptop";
        price = 500000;
        //hàm tạo không có kiểu trả về
    }

    /*Product(string ma, string ten, double gia) {
        id = ma; name = ten; price = gia;
    }*/

    Product(string id, string name, double price) {
        this->id = id; //con trỏ this để chỉ ra thuộc tính (trong trường hợp bị trùng tên giữa tham số và thuộc tính)
        this->name = name;
        this->price = price;
    }
    void setPrice(double newPrice) {
        if(newPrice >= 0) {
            price = newPrice;
        }
    }
    double getPrice() {
        return price;
    }

    string getId() {
        return id;
    }
    void setName(string newName){
        name = newName;
    }
    void display();/*{
        cout << id << " " << name << " " << price << endl;
    }*/
    ~Product() {
        cout << "Ham huy !\n";
    } // Sử dụng hàm hủy khi 1 lớp có thuộc tính con trỏ để giải phong bộ nhớ.


    //Hàm bạn của Product
    friend void hienthi(Product x); // có thể truy cập vào private informations
};

void hienthi(Product x) { // Hàm bạn
    cout << x.id << " " << x.name << " " << x.price << endl;
}


void Product::display() {
    cout << id << " " << name << " " << price << endl;
    // xây dựng hàm bên ngoài ngoài lớp, nhớ phải có cú pháp (toán tử phạm vi)ClassName::Tên Hàm để biết hàm này thuộc class nào. 
}

int main() {
   //Product p;
    //p.id = "101";
    //p.name = "TV";
    //p.price = 3000000;
    //p.setPrice(300000); //chặt chẽ hơn khi phải kiểm tra qua điều kiện.
    
    Product p;
    Product x("SP101", "TV", 300000);
    x.display();
    p.display();
}