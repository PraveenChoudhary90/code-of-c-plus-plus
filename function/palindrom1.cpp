#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char string[20];
    char temp[20];
    cout << "Enter the string" << "\n";
    cin >> string;
    strcpy(temp, string);
    cout << strrev (temp) << "\n" ;
    if(strcmp (temp,string)==0){
        cout << "yes" << "\n";
    }
    else{
        cout << "no" << "\n";
    }
    return 0;

}