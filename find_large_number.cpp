#include <iostream>
using namespace std;
int main()
{
    int number1 = 0;
    int number2 = 0;
    cout << "Enter the number which one is large" << "\n";
    cin >> number1;
    cout << "Enter the number which one is large" << "\n";
    cin >> number2;
    if( number1 > number2){
        cout << number1 << "is greater value" <<"\n";
    }
    else{
        cout << number2 << "is greater value" << "\n";
    }
    return 0;
}