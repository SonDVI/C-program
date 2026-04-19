//Công thức tính chỉ số BMI được cho trong ảnh trên, nhiệm vụ của bạn là tính ra chỉ số BMI của một người dựa trên cân nặng và chiều cao của họ và phân loại chỉ số khối cơ thể của họ

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float w, h; cin >> w >> h;

    float bmi = w / (h / 100 * h / 100);

    if (bmi < 18.5) {
        cout << "Under weight" << endl;
    }
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Normal" << endl;
    }
    else if (bmi >= 25 && bmi < 30) {
        cout << "Over weight" << endl;
    }
    else if (bmi >= 30 && bmi < 35) {
        cout << "Obesity 1" << endl;
    }
    else if (bmi >= 35 && bmi < 40) {
        cout << "Obesity 2" << endl;
    }
    else {
        cout << "Extreme obesity" << endl;
    }
    return 0;


}