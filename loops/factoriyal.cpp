#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int factoriyal_number = 1;
    cout << "Enter the number to do factoriyal of any number" << "\n";
    cin >> number;
    do{
        factoriyal_number = factoriyal_number * number;
        number--;

    }
    while(number >= 1);
    cout << factoriyal_number << "\n";
    return 0 ;
}