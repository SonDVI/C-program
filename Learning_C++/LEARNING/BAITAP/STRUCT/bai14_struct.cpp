//Để đánh giá chất lượng khóa học lập trình C/C++, 28tech tổ chức thu thập các bình luận của học viên. Trong đó sẽ lọc ra các từ có nội dung "good", "bad", "wonderful", "terrible". Bạn hãy xác định xem trong các bình luận của học viên mỗi từ trên xuất hiện bao nhiêu lần để 28tech có thể tự đánh giá và hoàn thiện khóa học được tốt hơn, nếu từ nào không xuất hiện thì bạn không cần liệt kê. Hãy sắp xếp các từ theo tần suất giảm dần, nếu 2 từ có cùng tần suất thì sắp xếp theo thứ tự từ điển


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
bool cmp(word a, word b) {
    if(a.fre != b.fre) return a.fre > b.fre;
    return a.data < b.data;
}
bool check(string s) {
    return s == "good" || s == "bad" || s == "wonderful" || s == "terrible";
}
void PRINT(word a) {
    cout << a.data << " " << a.fre << endl;
}

int main() {
    string s; 
    map<string, int> mp;
    while(cin >> s) {
        mp[s]++;
    }
    vector<word> v;
    for(auto it : mp) {
        v.push_back({it.first, it.second});
    }

    sort(v.begin(), v.end(), cmp);

    for(auto x : v) {
        if(check(x.data)) {
            PRINT(x);
        }
    }
    return 0;
}