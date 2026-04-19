//BUOI 1 : C
#include <stdio.h>
#define MAXBUFFER 1024
int main () {
    const int a = 100; // unchangeable variable
    int x = 200E4; //Ex is 10^x with x is an integer
    // integer = 4 bytes = 32 bit
    char y = 100; // char can be used to store small integers, but it is not recommended to use it for this purpose, a char is an integer ASCII table value, and it can only store values from -128 to 127 (or 0 to 255 if unsigned), so using it to store larger integers can lead to overflow and unexpected behavior. ( char = 1 byte = 8 bit )
    float z = 3.14; // float is a single-precision floating-point data type, it can store decimal numbers with a precision of about 7 decimal places ( float = 4 bytes = 32 bit )
    printf("hello %.2f\n", z); // %.xf with x is integer, means that printed 2 digits after the decimal point
    int f = a + MAXBUFFER;
    printf("f = %d\n", f);
    return 0;
}
int abc() {
    int z = MAXBUFFER;
    printf("z = %d\n", z);
    return 0;
}