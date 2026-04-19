#include <iostream>
using namespace std;
int Sum_Two_Numbers(int x, int y)
{

    int sum = x + y;
    return sum;
}
int main()
{
    int num1 = 5;
    int num2 = 10;
    int result = Sum_Two_Numbers(num1, num2); // calling the function, x and y replaced by num1 and num2
    cout << "The sum is: " << result << endl;
    return 0;
}