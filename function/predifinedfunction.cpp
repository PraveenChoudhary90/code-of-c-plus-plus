#include <iostream>
using namespace std;
#include <string.h>
int main()
{
  char name[20];
  char surname[20];
  cout << "Enter the name" << "\n";
  cin >> name;
  cout << "Enter the surname" << "\n";
  cin >> surname;
  cout <<  strlen(name) << "\t";//count length of the string
  cout << "\n uppercase=" << strupr(name) << "\n";//capital
  cout << "\nlowercase=" << strlwr(name) << "\n";//small
  cout << strcat(name,surname);//string concatination
  cout << "\n";
  cout << "\nname=" << name << "\n";
  cout << "\nsurname=" << surname << "\n";
  cout << strcpy(name,surname);//string copy
  cout << "\nname = " << name << "\n";
  cout << "\nsurname=" << surname << "\n";
  }