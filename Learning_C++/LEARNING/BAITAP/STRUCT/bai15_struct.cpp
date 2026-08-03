//28tech đang làm khảo sát về việc truy cập vào website của học viên trong phòng máy. Bạn hãy viết chương trình để quản lý lượt truy cập vào các trang web sau đó liệt kê các website theo thứ tự lượt được truy cập giảm dần. Nếu có 2 trang web có cùng lượt truy cập thì bạn in ra trang web có thứ tự từ điển nhỏ hơn trước.


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <climits>
#include <map>

using namespace std;

struct word{
    string data;
    int fre;
};

struct timeline{
    string date;
    string time;
    string page;
};

bool cmp(word a, word b) {
    if(a.fre != b.fre) return a.fre > b.fre;
    return a.data < b.data;
}

void PRINT(word a) {
    cout << a.data << " " << a.fre << endl;
}

int main() {
    string s;
    map<string, int> mp;
    while(getline(cin, s)) {
        timeline a;
        stringstream ss(s);
        getline(ss, a.date, ' ');
        getline(ss, a.time, ' ');
        getline(ss, a.page);
        mp[a.page]++;
    }
    vector<word> v;
    for(auto it : mp) {
        v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v) {
        PRINT(x);
    }
    return 0;
}
