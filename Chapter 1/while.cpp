#include <iostream>

int main(){
    int sum = 0, val = 1;
    //keep executing the while loop as long as val is less than 
    //equal to 10
    while (val < 10)
    {
        sum += val;
        val++;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0; 
}