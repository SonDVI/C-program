/*OUTPUT:

ABCDEF
bcdefg
CDEFGH
defghi
EFGHIJ
fghijk

*/
#include <iostream>
#include <iomanip>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    char a = 'A';
    char current_char;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            current_char = toupper(a);
            current_char += i;
        } else {
            current_char = tolower(a);
            current_char += i;
        }
        for (int j = 1; j <= n; j++) {
                cout << (char)current_char;
                current_char++;
        }
        cout << endl;
    }
}