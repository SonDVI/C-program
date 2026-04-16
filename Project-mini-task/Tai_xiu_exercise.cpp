

//random_dice_program//
#include <iostream>
#include <cstdlib>
int main() {
    srand(time(NULL));
    int dice_1 = std::rand() % 6 + 1;
    int dice_2 = std::rand() % 6 + 1;
    int dice_3 = std::rand() % 6 + 1;
    int sum = dice_1 + dice_2 + dice_3;
    if ( 11 < sum and sum < 17 ) {
        std::cout << "The sum is " << sum << "\nTai";
    }
    else {
        std::cout << "The sum is " << sum << "\nXiu";
    }
    return 0;

}
