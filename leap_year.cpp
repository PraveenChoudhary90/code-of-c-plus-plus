#include <iostream>
using namespace std;
int main(){
    int year = 0;
    cout << "Enter the year which one is leap year" << "\n";
    cin >> year ;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout << "is this leap year" << "\n";

    }
    else{
        cout << "not a leap year" << "\n";
    }
    return 0 ;
}