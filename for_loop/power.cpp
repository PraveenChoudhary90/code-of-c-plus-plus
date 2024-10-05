#include <iostream>
using namespace std;
int main()
{
    int base = 0;
    int result = 1;
    int power = 0;
    cout << "Enter the base of number" << "\n";
    cin >> base;
    cout << "Enter the power of number" << "\n";
    cin >> power;
    for( power; power > 0; power--){
        result= result * base ;
    }
    cout << result << "\n";
    return 0;
}