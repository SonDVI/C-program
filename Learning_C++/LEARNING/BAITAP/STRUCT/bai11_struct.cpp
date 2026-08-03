//Cho một đoạn văn gồm nhiều dòng, các từ trong đoạn văn được viết cách nhau một vài dấu cách. Hãy tìm từ xuất hiện nhiều nhất trong đoạn văn, nếu có nhiều từ có cùng số lần xuất hiện thì bạn hãy in ra từ có thứ tự từ điển nhỏ nhất. Các bạn sử dụng struct như sau (C++) :


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
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
int main() {
    map<string, int> mp;

    string s;
    while(cin >> s) {
        mp[s]++;
    }

    vector<word> v;
    for(auto p : mp) {
        v.push_back({p.first, p.second});
    }

    sort(v.begin(), v.end(), cmp);
    cout << v[0].data << endl;
}