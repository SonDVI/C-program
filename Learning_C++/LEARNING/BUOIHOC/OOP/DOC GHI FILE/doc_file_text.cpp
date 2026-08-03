/*                  
                        Đọc ghi file 
I.File Text
    - Muốn đọc ghi file c++ sẽ phải thông qua 1 trong 3 lớp sau :
            +) ofstream : Lớp để ghi file
            +) ifstream : Lớp để đọc file
            +) fstream : Lớp để vừa đọc vừa ghi file
    
    - Các lớp này kế thừa từ lớp ostream và istream, bạn đã sử dụng các đối tượng là cin và cout để thao tác đọc ghi từ bàn phím và màn hinh. Bây giờ bạn chỉ cần sử dụng các đối tượng của lớp ofstream và ifstream để đọc ghi từ bàn phím.

1. Mở file
    - Trước khi thao tác với file, bạn cần phải mở nó lên, tuy nhiên khi mở file lên bạn cần chỉ rõ module mở file.
        - CÚ PHÁP : 
                                    open(filename, mode)
            +) Trong đó filename là tên file bạn muốn mở, có thể file với đường dẫn tương đối hoặc tuyệt đối.
            +) Nếu bạn thao tác với các file nằm chung 1 thư mục với file mã nguồn thì bạn chỉ cần sử dụng đường dẫn tương đối.
    

    - Các mode : 
            Mode                        Ý nghĩa
            ios::in                     Mở file để đọc.
            ios::out                    Mở file để ghi.
            ios::binary                 Mở file ở chế độ nhị phân.
            ios::ate                    Mở file lên và để con trỏ file ở cuối file.
            ios::app                    Các thao tác đọc ghi sẽ được thực hiện từ cuối file.
            ios::trunc                  Mở file lên để ghi, xóa hết nội dung cũ trong file trước khi ghi.



            Lớp                             Mode
            ofstream                        ios::out
            ifstream                        ios::in
            fstream                         ios::out | ios::in
*/
#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    ofstream out;
    out.open("output1.txt"); //Mở file để ghi, nếu chưa tồn tại file này thì tạo mới
    out << "28tech.com.vn" << endl;
    out << 100 << endl;
    out << 30.4 << endl;
    
    out.close();    //Đóng file


    ifstream in;
    in.open("output1.txt", ios::in);
    if(in.is_open()) {
        int n; in >> n;
        in.ignore();
        string s;
        getline(in, s);
        cout << s << endl;
        getline(in, s);
        cout << s << endl;
        getline(in, s);
        cout << s << endl;
    }
    else {
        cout << "file not found" << endl;
    }
    in.close();
}