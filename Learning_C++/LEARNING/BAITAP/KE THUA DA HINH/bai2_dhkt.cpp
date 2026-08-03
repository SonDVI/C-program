/*Xây dựng lớp Person với các thuộc tính : Tên, ngày sinh, địa chỉ phương thức toString để trả về thông tin.

Lớp Student kế thừa từ lớp Person và có thêm thuộc tính là mã sinh viên, GPA và lớp, ghi đè phương thức toString.

Nhập danh sách sinh viên từ bàn phím và in ra màn hình danh sách sinh viên trong đó tên được chuẩn hóa và ngày sinh đưa về đúng chuẩn dd/mm/yyyy.

Tên sinh viên được sắp xếp theo thứ tự từ điển tăng dần, thứ tự từ điển của tên được xét từ tên, họ, đệm. Nếu 2 bạn cùng tên thì bạn nào xuất hiện trong danh sách trước được in ra trước

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;
struct Date{
    string day, month, year;
};
class Person{
private:
    string name;
    Date date;
    string address;
public:
    Person(string name, Date date, string address) {
        this->name = name;
        this->date = date;
        this->address = address;
    }

    void normalize_date() {
        while(date.day.size() < 2) date.day = '0' + date.day;
        while(date.month.size() < 2) date.month = '0' + date.month;
        while(date.year.size() < 4) date.year = '0' + date.year;
    }

    void normalize_name() {
        stringstream ss(name);
        string temp;
        string res = "";
        while(ss >> temp) {
            res += toupper(temp[0]);
            for(int i = 1; i < temp.size(); i++) {
                res += tolower(temp[i]);
            }
            res += " ";
        }
        res.pop_back();
        name = res;

    }
    virtual void To_String() {
        cout << name << " " << date.day << "/" << date.month << "/" << date.year << " " << address << " ";
    }

    string get_name() {
        return name;
    }

    virtual ~Person() {};

};

class Student : public Person {
private:
    int msv;
    double gpa;
    string lop;
public:
    Student(string name, Date date, string address, int msv, double gpa, string lop) : Person(name, date, address) {
        this->msv = msv;
        this->gpa = gpa;
        this->lop = lop;
    }

    void To_String() {
        cout << setfill('0') << setw(4) << msv << " ";
        Person::To_String();
        cout << lop << " ";
        cout << fixed << setprecision(2) << gpa;
    }

};
bool cmp(Person* hocsinh1, Person* hocsinh2) {
    // Tách tên học sinh 1
    vector<string> w1;
    stringstream ss1(hocsinh1->get_name());
    string temp;
    while (ss1 >> temp) {
        w1.push_back(temp);
    }

    // Tách tên học sinh 2
    vector<string> w2;
    stringstream ss2(hocsinh2->get_name());
    while (ss2 >> temp) {
        w2.push_back(temp);
    }

    // Rút trích Tên, Họ (an toàn với mọi độ dài tên)
    string ten1 = w1.back(), ten2 = w2.back();
    string ho1 = w1.front(), ho2 = w2.front();

    // Ghép các từ ở giữa thành Đệm
    string dem1 = "", dem2 = "";
    for (int i = 1; i < (int)w1.size() - 1; i++) dem1 += w1[i] + " ";
    for (int i = 1; i < (int)w2.size() - 1; i++) dem2 += w2[i] + " ";

    // So sánh chuẩn theo yêu cầu đề bài
    if (ten1 != ten2) {
        return ten1 < ten2;
    } else if (ho1 != ho2) {
        return ho1 < ho2;
    } else {
        return dem1 < dem2;
    }
}
int main() {
    int n; cin >> n;
    int msv = 0;
    vector<Person*> v;
    cin.ignore();
    while(n > 0) {
        string name, address, birth;
        getline(cin, name);
        getline(cin, birth);
        getline(cin, address);

        Date date;

        stringstream ss(birth);
        getline(ss, date.day, '/');
        getline(ss, date.month, '/');
        getline(ss, date.year);


        string lop;
        getline(cin, lop);

        double gpa; cin >> gpa;
        cin.ignore();
        ++msv;
        Person* hocsinh = new Student(name, date, address, msv, gpa, lop);
        hocsinh->normalize_date();
        hocsinh->normalize_name();
        v.push_back(hocsinh);
        --n;
    }

    stable_sort(v.begin(), v.end(), cmp);

    for(auto it : v) {
        it->To_String();
        cout << endl;
    }

    for(auto it : v) {
        delete it;
    }
    return 0;
}