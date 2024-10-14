#include <iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    int max;
    cout << "Enter the number 1" << "\n";
    cin >> number1;
    cout << "Enter the number2" << "\n";
    cin >> number2;
    max = number1 > number2 ? number1:number2;
    while(true){
        if(max % number1 == 0 && max % number2 == 0){
            cout << max << "\n";
            break;
            
        }
        max++;
    }
    return 0;

}