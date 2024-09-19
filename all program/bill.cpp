#include <iostream> 
using namespace std;
int main(){
    int bill = 0;
    int reading = 0;
    int charge = 0;
    cout << "Enter the reading " << "\n";
    cin >> reading;
    if(reading >= 1 && reading <=100){
        bill = reading * 3;

    }
    else if(reading >= 101 && reading <= 200 ){
        bill = reading* 5;

    }
    else if(reading >= 201 && reading <=300){
        bill = reading * 7;
    }
    else if(reading >= 300 && reading <= 500){
        bill = reading * 10 ;
    }
    else if(reading > 500) {
        bill = reading * 12 ;
    }
    else{
        cout << "zero reading service charge =  " << 50 << "\n";
    }
    charge = bill *20/100;
    cout << bill+charge << "\n";

    return 0;
}