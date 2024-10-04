#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int reverse = 0;
    cout << "Enter the number" << "\n";
    cin >> number;
    while(number > 0){
        reverse = 10 * reverse + number % 10;
        number = number / 10;


    }
    cout << reverse << "\n";
}