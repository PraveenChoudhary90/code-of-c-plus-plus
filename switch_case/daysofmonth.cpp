#include <iostream>
using namespace std;
int main ()
{
    int month = 0;
    cout << "Enter 1 for january" << "\n";
    cout << "Enter 2 for fabuary" << "\n";
    cout << "Enter 3 for march" << "\n";
    cout << "Enter 4 for apirl" << "\n";
    cout << "Enter 5 for mai" << "\n";
    cout << "Enter 6 for jun" << "\n";
    cout << "Enter 7 for july" << "\n";
    cout << "Enter 8 for august" << "\n";
    cout << "Enter 9 for september" << "\n";
    cout << "Enter 10 for octumber" << "\n";
    cout << "Enter 11 for novmber" << "\n";
    cout << "Enter 12 for december" << "\n";
    cin >> month;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            cout << " 31 days" << "\n";
            break;

        }
        case 2:
        {
            cout << "28days and 29 days depend leap year" << "\n";
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:
        {
            cout << " 30 days" << "\n";
            break;

        }
        default:
        {
            cout << "Invalid choice" << "\n";
        }
    }
    return 0; 
}