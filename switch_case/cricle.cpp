#include<iostream>

#include<math.h>

using namespace std;
int main() {
  /*
  write a c++ program to find area of a triangle / square / circle / rectangle using switch statement.

  Visit: https://www.programmingwithbasics.com/2015/11/write-c-to-calculate-area-of-circle.html

  */

  float a, b, c, s, radius, area;

  int choice;

  cout << "Press 1 for Area of a Triangle";
  cout << "\nPress 2 for Area Of Square";
  cout << "\nPress 3 for Area Of Circle ";
  cout << "\nPress 4 for Area Of Rectangle\n";
  cout << "\nEnter Your Choice :";

  cin >> choice;

  switch (choice) {
  case 1: {
    cout << "\nEnter Base and Height of Triangle: ";
    cin >> a >> b;
    area = (a*b) / 2 ; 
    cout << "\nArea of Triangle = " << area << endl;
    break;
  }
  case 2: {
    cout << "\nEnter the Side Of Square: ";
    cin >> a;
    area = a * a;
    cout << "\nArea of Square = " << area << endl;
    break;
  }
  case 3: {
    cout << "\nEnter the Radius of Circle: ";
    cin >> radius;
    area = 3.14159 * radius * radius;
    cout << "\nArea of Circle = " << area << endl;
    break;
  }
  case 4: {
    cout << "\nEnter the Length and Width of Rectangle: ";
    cin >> a >> b;
    area = a * b;
    cout << "\nArea Of Rectangle = " << area << endl;
    break;
  }
  default:
    cout << "\n Invalid Choice!!! Choose Between 1 to 4";
    break;
  }
  return 0;
}