#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter the number " << "\n";
    cin >> number;
    int sum = 0;
    while(number > 0){
        sum = sum + number % 10;
        number = number / 10;
    }
    cout << "sum of number =" << sum << "\n";
}