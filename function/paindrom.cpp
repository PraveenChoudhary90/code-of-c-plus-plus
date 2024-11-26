#include <iostream>
using namespace std;
#include <string.h>
int main()
{
 char psw[20];
 char temp[20];
 cout << "Enter the password" <<"\n";
 cin >> psw;
 strcpy(temp,psw);
 cout << strrev(temp) <<"\n";
 if(strcmp(temp,psw)==0){
    cout << "yes" << "\n";
 }
 else{
    cout << "no" << "\n";
 }
}