#include <iostream>
using namespace std;
int main()
{
    int number1 = 0;
    int number2 = 0;
    cout << " Enter the value of number1 " << "\n";
    cin >> number1;
    cout << "Enter the value of number2" << "\n";
    cin >> number2;
    int choice = 0;
    cout << "1 for swap the number " << "\n";
    cout << "2 for check which one is greater number" << "\n";
    cin >> choice;
    switch(choice)
    {
        case 1:
        {
        int temp = 0;
        temp = number1;
        number1 = number2;
        number2 = temp;
        cout << " After the swapping value of number1 = " << number1 << "\n";
        cout << "After the swaping value of number2 = " << number2 << "\n"; 
        }
        break;

        case 2:
        {
            if(number1 > number2)
            {
                cout << number1  << "Is greater" << "\n";
            }
            else{
                cout << number2 << "Is greater" << "\n";
            }
            
        }
        break;

        default :{
            cout << "Invalid choice" << "\n";
        }
        break;
    }
    return 0;

}