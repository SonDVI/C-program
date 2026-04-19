#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            int tren = i;
            int duoi = (size - 1) - i;
            int trai = j;
            int phai = (size - 1) - j;

           
            int min_dist = tren;
            if (duoi < min_dist) min_dist = duoi;
            if (trai < min_dist) min_dist = trai;
            if (phai < min_dist) min_dist = phai;

            
            cout << n - min_dist << " ";
        }
        
        cout << endl;
    }

    return 0;
}