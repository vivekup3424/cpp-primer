#include <iostream>
using  namespace std;

//How to reuse code 
int main(){
    int threeExpFour = 1;
    for (int i = 0; i < 4; i++)
    {
        threeExpFour = threeExpFour *3;
    }
    cout << "3^4 is " << threeExpFour << endl;
    
    int sixExpFive = 1;
    for (int i = 0; i < 5; i++)
    {
        sixExpFive = sixExpFive *6;
    }
    cout << "6^5 is " << sixExpFive << endl;
    return 0;
}

int raiseToPower(int base, int exponent){
    int result = 1;
    for (int i = 0; i < exponent; i++){
        result = result*base;
    }
    return result;
}
