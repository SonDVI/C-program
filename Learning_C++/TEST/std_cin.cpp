#include <iostream>
int main() {
    double temperature;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temperature; /*std::cin is used to get input from the user*/
    if (temperature > 0) {
        std::cout << "Temperature is above freezing point.";
    }
    else if (temperature < 0) {
        std::cout << "Temperature is below freezing point.";
    }
    else {
        std::cout << "Temperature is at freezing point.";
    }


    return 0;

}