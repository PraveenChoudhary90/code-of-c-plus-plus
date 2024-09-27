#include <iostream>
using namespace std;
int main()
{
    int number1 = 0;
    int number2 = 0;
    cout << "Enter the value of number1" << "\n";
    cin >> number1;
    cout << "Enter the value of number2" << "\n";
    cin >> number2;
    cout << "1 for addition" << "\n";
    cout << "2 for mutification" << "\n";
    cout << "3 for divistion" << "\n";
    cout << "4 for subtraction" << "\n";
    int choice = 0;
    cout << "Enter the choice" <<"\n";
    cin >> choice;
    switch(choice)
    {
        case 1:
        {
            cout << number1 + number2 << "\n";
            break;
        }
        case 2:
        {
            cout << number1 * number2 << "\n";
            break;
        }
        case 3:
        {
            cout << number1 / number2 <<"\n";
            break;
        }
        case 4:
        {
            cout << number1 - number2 << "\n";
            break;
        }
        default:
        {
            cout << "Invaid choice" << "\n";
            break;
        }
    }
    return 0;
}