/*
        COMPARASION FUNCTION
    
    -  nếu muôn sắp xếp theo thứ tự ý mình, thì mình có thể tự tạo ra hàm so sánh thêm sau hàm sort, giả dụ như hàm có sẵn greater<int>().

*/
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

//field : Trường thông tin.
//stable_sort : có tính chất ổn định, nếu 2 số có cùng tính chất nào đó khi sắp xếp thì số nào xuất hiện trước sẽ đứng trước. -- > merge sort
//sort == quick sort + heap sort == intro sort 
//true : Neu x dung truoc y trong thu tu sap xep.
//false : Neu x dung sau y trong thu tu sap xep

//B1 : XAC DINH THU TU MUON  SAP XEP.
//B2 : TIM DIEU KIEN DE X DUNG TRUOC Y TRONG THU TU SAP XEP DO.
//B3 : KIEM TRA DIEU KIEN O BUOC 2.
bool cmp(int x, int y) {
    //return x < y; --> tang dan
    return x > y; // --> giam dan.
}
int main() {
    int a[] = {3, 2, 1, 5, 8, 9, 4, 7, 10, 6};
    int n = 10;

    sort(a, a + n, cmp);
    for(auto x : a) {
        cout << x << " ";
    }
}