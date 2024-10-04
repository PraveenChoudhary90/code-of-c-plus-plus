#include <iostream>
using namespace std;
int main(){
    int number = 0;
    cout << "Enter the number" << "\n";
    cin >> number;
    int reverse_number = 0;
    while(number >0){
        reverse_number = reverse_number * 10 + number % 10;
        number = number / 10;

    }
    cout << reverse_number << "\n";
    return 0;
}