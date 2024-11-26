#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char pass[20];
    char repass[20];
    cout << "Enter the password" << "\n";
    cin >> pass;
    cout << "Enter the repassword" << "\n";
    cin >> repass;
    if(strcmp(pass,repass)==0)
    {
        cout << "correct" << "\n";
    }
    else{
        cout << "password not matched" << "\n";
    }
}

