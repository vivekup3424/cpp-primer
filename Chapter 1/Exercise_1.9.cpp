#include <iostream>

int main(){
    int sum = 0, num1 = 50, num2 = 100;
    while (num1 <= num2)
    {
        sum += num1;
        num1++;
    }
    std::cout << "The sum of numbers from 50 to 100 inclusively is "
              << sum << std::endl;
    return 0;
    
}