#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> mp;
    mp.insert({3, 5});// (3, 5)
    mp.insert({3, 3});// (3, 5)
    mp.insert({2, 1});// (2, 1), (3, 5)
    mp.insert({4, 1});// (2, 1), (3, 5), (4, 1)
    mp.insert({5, 2});// (2, 1), (3, 5), (4, 1), (5, 2)
    mp.insert({2, 2});// (2, 1), (3, 5), (4, 1), (5, 2)
    mp.erase(3); //xoa key + value cua thang key = 3
    
    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl; //vi it la 1 pair nen phai giai tham chieu
    }

    //or

    for(auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

}

