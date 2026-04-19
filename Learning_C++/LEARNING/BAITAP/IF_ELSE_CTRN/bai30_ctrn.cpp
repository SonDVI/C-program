//Trong lớp có N sinh viên, muốn chọn ra 2 bạn sinh viên để tham gia cuộc thi khiêu vũ, hỏi có bao nhiêu cách?

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long tohop = ((long long)n * (n - 1)) / 2;
    cout << tohop << endl;
    return 0;

}