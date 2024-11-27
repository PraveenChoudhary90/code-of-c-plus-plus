#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char pass[20];
    char temp[20];
    cout << "Enter the password" << "\n";
    cin >> pass;
    strcpy(temp, pass);
    cout << strrev (temp) << "\n" ;
    if(strcmp (temp,pass)==0){
        cout << "yes" << "\n";
    }
    else{
        cout << "no" << "\n";
    }
    return 0;

}
