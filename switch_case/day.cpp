#include <iostream>
using namespace std;
int main()
{
    int day = 0;
    cout << " 1 for monday" << "\n";
    cout << " 2 for tuesday" << "\n";
    cout << " 3 for wensday" << "\n";
    cout << " 4 for thursday" << "\n";
    cout << " 5 for friday" << "\n";
    cout << " 6 for saturday" << "\n";
    cout << " 7 for sunday" << "\n";
    cout << "Enter the choice to check day" << "\n";
    cin >> day;
    switch(day){
        case 1:{
            cout << "Monday" << "\n";
            break;
        }
        case 2:
        {
            cout << "Tuesday" << "\n";
            break;
        }
        case 3:
        {
            cout << "Wensday" << "\n";
            break;
        }
        case 4:
        {
            cout << "Thursday" << "\n";
            break;
        }
        case 5:
        {
            cout << "Friday" << "\n";
            break;
        }
        case 6:
        {
            cout << "Saturday" << "\n";
            break;
        }
        case 7:
        {
            cout << "Sunday" << "\n";
            break;
        }
        default:
        {
            cout << "Inavlid day" << "\n";
            break;
        }
    }
    return 0;
}