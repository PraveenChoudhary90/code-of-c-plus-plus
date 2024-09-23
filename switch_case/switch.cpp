#include <iostream>
using namespace std;
int main()
{
    int num1 =0;
    int num2 =0;
    int choice = 0;
    cout << " Enter the value of number1" <<"\n";
    cin >>num1;
    cout << " Enter the value of number2" <<"\n";
    cin >>num2;
    cout << "Enter the choice 1 for addition\n 2for multification\n 3 for division\n 4 for subtraction" << "\n";
    cin >> choice;//calculater

switch(choice){
    case 1:
    {
        cout << num1+num2 << "\n";
        break;
    }
    case 2:
    {
        cout << num1 * num2 << "\n";
        break;
    }
    case 3:
    {
    cout << num1 /num2 << "\n";
    break;
    }
    case 4:
    {
        cout << num1 - num2 << "\n";
        break;
    }
    default :
    {
        cout << "invalid choice" << "\n";
        break;
    }
    return 0;
}
}
