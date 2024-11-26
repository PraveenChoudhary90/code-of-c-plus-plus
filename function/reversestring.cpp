#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char psw[20];
    cout << "Enter the passwrod" << "\n";
    cin >> psw;
    cout << strrev(psw);
}
