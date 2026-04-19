#include <stdio.h>
int main() {
    int a, b;
    if (a > 10 && b < 20) {// a > 10 and b<20
        //This means a and b are both true.
    }
    if (a > 10 || b < 20) {// a > 10 or b < 20
        //This means either a or b is true, or both are true.
    }
    if (!(a > 10)) {// not a > 10
        //This means a is false, or a is less than or equal to 10.
    }
    return 0;
}