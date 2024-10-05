#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int i = 1;
    cout << "Enter the number to genrate table" << "\n";
    cin >> number;
    while(i <= 10){
        cout <<  number * i << "\n";
        i++;
        
    }
    return 0;
}