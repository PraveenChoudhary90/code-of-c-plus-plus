#include <iostream>
using namespace std;
int main()
{
    int number1;
    int number2;
    int r;
    cout << "Enter the number 1" << "\n";
    cin >> number1;
    cout << "Enter the number 2" << "\n";
    cin >> number2;
    for(int i = 1; i<= number1 || i<= number2 ; i++){
        if(number1 % i == 0 && number2 % i ==0){
            r= i;
        }
    }
    cout << "H.C.F = " << r <<"\n";
}