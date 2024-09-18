#include <iostream>
using namespace std;
int main(){
    int pwd , otp;
    cout << "Enter the password" << "\n";
    cin >> pwd;
    if(pwd==2025){
        cout << "Enter the otp" << "\n";
        cin >> otp;
        if(otp==2002){
            cout << "you are the owner" << "\n";

        } 
        else{
            cout << "you are fraud" << "\n";
        }
    }
    else{
        cout << "wronge password" << "\n";
    }
}