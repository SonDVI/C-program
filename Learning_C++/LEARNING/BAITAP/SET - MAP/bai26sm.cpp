    /*Cho 1 loạt các lượt truy cập website của một sinh viên IT, bạn hãy xác định xem mỗi website được truy cập bao nhiêu lượt.*/
    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string url;
        map<string, int> mp;
        while(cin >> url) {
            mp[url]++;
        }
        for(auto x : mp) {
            cout << x.first << " " << x.second << endl;
        }
        return 0;
    }