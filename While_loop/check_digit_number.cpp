#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number for check the digit and number " << "\n";
    cin >> number;
    int c = 0;
    while(number > 0){
        if(number % 10 >= 0){
            c++;

        }
        number = number / 10;

    }
    cout <<"countdigit = " << c << "\n";
    return 0;
}