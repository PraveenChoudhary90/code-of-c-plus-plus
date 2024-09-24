#include <iostream>
using namespace std;
int main()
{
    int gender = 0;
    cout << "Enter the gender name to check it is male or female" <<" \n";
    cin >> gender;
    int choice = 0;
    cout << "Enter the choice" << "\n";
    cin >> choice;
    switch(choice == 0){
         case 'M':
         case 'm':
         {
            cout << "Male" << "\n";
            break;
         }
         case 'F':
         case 'f':
         {
            cout << "female" << "\n";
         }
         default:{
            cout << "Other" << "\n";
         }
         return 0;
    }
    

}