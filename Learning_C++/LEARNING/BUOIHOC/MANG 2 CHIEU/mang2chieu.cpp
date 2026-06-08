/*
            MẢNG 2 CHIỀU (2D array) 



    - Hiểu đơn giản là các mảng 1 chiều nằm chồng chất lên nhau.



    - Mảng 2 chiều là một mảng dữ liệu nổi tiếng tượng trưng cho ma trận trong toán học đại số tuyến tính, ứng dụng cho nhiều thuật toán. --> số lượng phần tử lưu = số hàng x số cột.

    (chỉ số hàng và cột được đánh dấu từ số 0 như mảng 1 chiều)
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//Nên xây dựng mảng hai chiều ngoài main để đỡ phải truyền tham số + không bị tràn bộ nhớ stack.
//Khi xây dựng hàm của mảng hai chiều ta cần chỉ rõ một trong hai yếu tố số hàng hoặc số cột của nó,

void nhap(int a[][100], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

void duyet(int a[][100], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];
    //cách nhập mảng hai chiều
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    //cách nhập mảng 2 chiều bằng cách dùng vector<int> của mảng a
    vector<int> b[n];
    for(int i = 0; i < n; i++) {
        //a[i]:vector lưu dòng thứ i của mảng hai chiều
        for(int j = 0; j < m; j++) {
            int x; cin >> x;
            b[n].push_back(x);
        }
    }

    //Cách nập mảng 2 chiều bằng vector<vector<int>> a;
    vector<vector<int>> c;
    for(int i = 0; i < n; i++) {
        vector<int>row;
        for(int j = 0; j < m; j++) {
            int x; cin >> x;
            row.push_back(x);
        }
        c.push_back(row);
    }


    //In mảng 2 chiều theo hàng
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " " << endl;
        }
    }

    //Duyệt từ dưới lên trên theo hàng
    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
    }

    //In mảng 2 chiều theo cột
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[j][i] << " ";
        }
    }

    
    //Tổng hàng
    for(int i = 0; i < n; i++) {
        ll sum = 0;
        for(int j = 0; j < m; j++) {
            sum += a[i][j];
        }
        cout << sum << " ";
    }

    //Tổng cột
    for(int i = 0; i < m; i++) {
        ll sum = 0;
        for(int j = 0; j < n; j++) {
            sum += a[j][i];
        }
        cout << sum << " ";
    }




    
}