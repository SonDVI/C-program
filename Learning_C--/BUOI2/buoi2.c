// This program calculates the roots of a quadratic equation ax^2 + bx + c = 0
// BAITAP BUOI 2 : C
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("No real roots\n");
    }
    else if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Two distinct real roots: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else { 
        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("One repeated real root: x = %.2f\n", x1);
    }
    return 0;
}