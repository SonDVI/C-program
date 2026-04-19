/*2. Viết chương trình tính căn bậc hai của 1 số thực dương với độ chính xác có thể điều chỉnh được bằng giá trị epsilon (ví dụ chính xác tới 0.0001), yêu cầu không được dùng hàm có sẵn trong thư viện math.h */
#include <stdio.h>
int main() {
    float number, epsilon, roots;

    scanf("%f %f", &number, &epsilon);
    if (number > 0) {
        roots = number;
        while (1) {
            float next = 0.5 * (roots + number / roots);
            if ((next - roots) < epsilon && (next - roots) > -epsilon) {
                roots = next;
                break;
            }
            roots = next;
        }
    printf("The square root of %.4f is approximately %.4f\n", number, roots);
    }
    else {
        printf("Please enter a positive number.\n");


    }
    
    
}