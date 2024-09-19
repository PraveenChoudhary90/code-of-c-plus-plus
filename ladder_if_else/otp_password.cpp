#include <iostream>
using namespace std;
int  main(){
    int otp = 0;
    int psw = 0;
    cout << "Enter the password" << "\n";
    cin >> psw;
    if(psw == 2002){
        cout << "Enter the otp" << "\n";
        cin  >> otp;
        if(otp == 2000){
            cout << "Your the owner" << "\n";
        }
        else{
            cout << "Your are fraud" << "\n";
        }
    }
    else{
        cout << "wrong" << "\n";
    }
    return 0;
}