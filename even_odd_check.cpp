#include <iostream>
using namespace std;
int main(){
    int number = 0;
    cout << "Enter the number for check is this even or  odd " << "\n";
    cin >> number;
    if(number % 2 == 0){
        cout << "number is even" << "\n";

    }
    else{
        cout << "number is odd" << "\n";
    }
    return 0;
}