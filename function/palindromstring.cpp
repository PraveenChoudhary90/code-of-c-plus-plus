#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char psw[20];
    cout << "Enter the passwrod" << "\n";
    cin >> psw;
    if(strrev(psw)==psw){
        cout << "yes" << "\n";
    }
    else{
        cout << "no" << "\n";
    }
}
