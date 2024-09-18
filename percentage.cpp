#include <iostream>
using namespace std;
int main(){
    float number1 = 0;
    float number2 = 0;
    cout << "Enter the percentage of 10th" << "\n";
    cin >> number1;
    if(number1 >= 65 && number1 <=100){
        cout << " Enter the marks of 12th" << "\n";
        cin >> number2;
        if(number2 >=70 && number2 <=100){
            cout << " you are the clerk" << "\n";
        }
        else{
            cout << "you are peon"<<"\n";
        }
    }
    else{
        cout << "you are not eligibal" << "\n";
    }
}