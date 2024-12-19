#include <iostream>
using namespace std;
class ATM{
    public:ATM(int u, int p){
        if(u==1111 && p==2024){
            cout << "Welcome" << "\n";
        }
        else{
            cout << "Invalid user" << "\n";
        }
    }
    ATM()
    {
        cout << "memory allocated" << "\n";
    }

};
int main()
{
    int acno,pass;
    cout << "Enter the account number" << "\n";
    cin >> acno;
    cout << "Enter the password" << "\n";
    cin >> pass;
    ATM obj (acno, pass);
    ATM p;
}