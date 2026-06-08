/*

                    Lưu trữ Mảng , Vector, Set, Map trong string;

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
   //Array 1D trong luu tru string 
    string a[] = {"28tech abc", "nguyen van long", "lap trinh", "thuat toan", "website"};

    sort(a, a + 5); // xep theo thu tu tu dien tang dan

    for(string x : a) {
        cout << x << endl;
    }



    
}