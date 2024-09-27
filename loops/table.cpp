#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int i = 1;
    cout << "Enter the number to genrete table" << "\n";
    cin >> number;
    do{
        cout << number*i << "\n";
        i++;
    }
    while(i <= 10);
}