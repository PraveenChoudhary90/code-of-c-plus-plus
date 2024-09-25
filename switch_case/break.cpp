#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter the number " << "\n";
    cin >> number;
    int choice = 0;
    cout << " 1 for hello" << "\n";
    cout << " 2 for praveen" << "\n";
    cout << "3 for choudhary" << "\n";
    cin >> choice;
    switch(choice){
        case 1:
        {
            cout << "hello" << "\n";
            break;
        }
        case 2:
        {
            cout << "praveen" << "\n";
            break;
        }

        case 3:
        {
            cout << "choudhary" << "\n";
            break;

        }
        default:
        {
            cout << "invalid choice" << "\n";
            break;
        }
        return 0;
        
    }
    }