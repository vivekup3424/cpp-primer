#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   int x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "x is 1\n";
        break;
    case 2:
        cout << "x is 2\n";
        break;
    case 3:
        cout << "x is 3\n";
        break;
    case 4:
        cout << "x is 1\n";
        break;
    
    default:
    cout << "x is not 1,2,3 or 4.\n";
        break;
    }
    return 0;
}





