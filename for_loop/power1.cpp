#include <iostream>
using namespace std;
int main()
{
    int base = 0;
    int power = 0;
    int result = 1;
    cout << "Enter The base" << "\n";
    cin >> base;
    cout << "Enter the power of base" << "\n";
    cin >> power;
    for(power; power > 0; power++){
     result  = base * power;
    }
    cout << "result = " << result << "\n";
    return 0;
}