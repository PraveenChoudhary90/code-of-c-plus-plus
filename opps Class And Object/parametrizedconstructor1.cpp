#include <iostream>
using namespace std;
class Atm{
    public: Atm(int u , int p){
        if(u==1234 && p==1230){
            cout << "Welcome" << "\n";
        }
        else{
            cout << "Invalid User" << "\n";
        }
    }

};
int main(){
    int acno,password;
    cout << "Enter the Account number" << "\n";
    cin >> acno;
    cout << "Enter the password" << "\n";
    cin >> password;
    Atm obj(acno,password);
}
