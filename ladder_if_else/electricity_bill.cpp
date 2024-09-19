#include <iostream>
using namespace std;
int main()
{
    int reading  = 0;
    int bill = 0;
    int charge = 0;
    cout << "Enter the reading " <<"\n";
    cin >>reading;
    if(reading >= 1 && reading <= 100){
        bill = reading * 3;
        charge = bill*20/100;
        cout << bill+charge  << "rs" << "\n";
    }
    else if(reading >= 101 && reading <= 200){
        bill = reading * 5;
        charge = bill*20/100;
        cout << bill+charge << "rs" << "\n";
    }
    else if(reading >= 201 && reading <= 500){
        bill = reading * 7;
        charge = bill*20/100;
        cout << bill+charge <<"rs" << "\n";
    }
    else if(reading > 500){
        bill = reading * 10;
        charge = bill*20/100;
        cout << bill+charge << "rs" << "\n";
    }
    else{
        cout << "Invalid reading service charge = " << 50 <<"rs" << "\n";
    }
    return 0;
}