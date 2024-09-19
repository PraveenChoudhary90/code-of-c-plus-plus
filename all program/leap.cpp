#include <iostream>
using namespace std;
int main(){
    int leap_year = 0;
    cout << "Enter the year" << "\n";
    cin >> leap_year;
    if((leap_year % 4 == 0 && leap_year % 100 != 0 ) || leap_year % 400 == 0){
        cout << "Yes this is a leap year" << "\n";
    }
    else{
        cout << " that not a leap year its a only normal year" << "\n";
    }
    return 0 ;
} 