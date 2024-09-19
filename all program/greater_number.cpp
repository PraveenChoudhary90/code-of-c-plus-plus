#include <iostream>
using namespace std;
int main(){
    int number1 = 0;
    int number2 = 0;
    cout << "Enter the number 1" << "\n";
    cin >> number1;
    cout << "Enter the number 2" << "\n";
    cin >> number2;
    if(number1 > number2){
        cout << number1 << "lagre number1" << "\n";
    }
    else{
        cout << number2 << "lagre number2" << "\n";
    }
    return 0 ;

}