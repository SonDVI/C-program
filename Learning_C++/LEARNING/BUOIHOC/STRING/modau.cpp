/*
            String (Xâu kí tự)
    - String là lớp để xử lý xấu kí tự trong ngôn ngữ lập trình c++. Các bạn có thể nghĩ string như một mảng kí tự nhưng có thể mở rộng, thu hẹp và hỗ trợ rất nhiều hàm xử lý xâu thông dụng.


    - CÚ PHÁP: string name_string;
    
    SYNTAX HAY GẶP :
    s.size() : số lượng char trong string

    s.pushback() : thêm phân tử vào cuối xâu

    s.popback() : xóa phân tử ở cuối xâu

    s.begin(), s.end() : giống iterator của vector

    s.insert(chỉ số, cái cần chèn) : chèn vào trước chỉ số vd: 28tech di hoc  --> s.insert(3, "@") --> 28t@ech di hoc.

    s.erase() : có hai cách dùng : 1. Xóa từ chỉ số đến hết : s.erase(chỉ số)
    2. xóa bao nhiêu kí tự từ chỉ số đã nhập  s.erase(chỉ số, số kí tự muốn xóa).

    s.substr() : xâu con từ xâu đang xét, khi truyền chỉ số vào --> nó sẽ cắt từ chỉ số đó đến hết. Hoặc truyền chỉ số và kí tự muốn cắt --> nó sẽ cắt số kí tự bạn muốn cắt tính từ chỉ số bạn truyền.

    s.find() : trả về chỉ số đầu tiên của từ ta tìm, nếu không tìm trả về : s.find() == string::np os.

    Nối chuỗi : nối hai xâu bằng cách lấy s += xâu cần nối --> xâu cần nối sẽ được nối vào cuối s.


*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    //CACH NHAP XUAT STRING
    /*KHI NHẬP XUẤT STRING BẬN CẦN CHÚ Ý:

    +) Nếu xâu kí tự bạn nhập không có dấu cách thì bạn có thể sử dụng cin để nhập,
    
    
    +) trường hợp có dấu cách thì bạn cần dùng hàm getline().*/

    string s, t; cin >> s >> t; // nhap s, t tu ban phim
    cout << t << ' ' << s << endl;


    //Trong trường hợp xâu bạn có dấu cách, nếu sử dụng cin, bạn chỉ nhập được từ đầu tiên của xâu đó, vì bản chất của cin là nó sẽ dừng nhập khi gặp khoảng trắng.
    //-->getline

    string s1;
    getline(cin, s1);
    cout << s1 << endl;

    //LƯU Ý: Khi dùng getline, bản chất cách hoạt động của getline sẽ dừng nhập tới khi gặp dấu xuống dòng, vì thế hãy đảm bảo trước khi nhập getline, trong bộ nhớ đệm bàn phím không còn thưa dấu enter do cin để lại từ câu lệnh nhập trước. Tình huống xảy ra trôi lệnh :
    
    /*int x; cin >> x; // cin sẽ để lại enter trong bộ đệm bàn phím.

    string s2;
    getline(cin, s); // getline đọc phải phím enter và kết thúc việc nhập
    cout << s2 << endl;
    
    input : 28
            Tech dev
    output :   
    
    
    
    */

    //CÁCH XỬ LÍ

    //hãy nhớ rằng không phải trước getline là bạn cần xóa bộ nhớ đệm, bao giờ trước getline mà có câu lệnh cin thì mới cần phải xóa bộ đệm. Các bạn xóa đi phím enter trong bộ đệm bằng câu cin.ignore(1)

    int x; cin >> x;
    string s2;
    cin.ignore(1); //xóa 1 kí tự (enter) trước đó khi cin ở bộ nhớ đệm'

    getline(cin, s2);

    cout << s2 << endl;

    //nhập nhiều dòng

    string s3;
    while(getline(cin, s3)) { //doc tung dong/ đọc từng từ thì thay bằng cin.
        cout << s3 << endl;
    }


    //cách in từng kí tự (char)

    string s4 = "28tech di hoc toan";
    cout << s4 << endl;
    //cach 1:
    for(char x : s4) {
        cout << x << " ";
    }

    //cach2
    for(int i = 0; i < s4.size(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    //cach3
    for(auto it = s4.begin(); it != s4.end(); it++) {
        cout << *it << " ";
    }
}