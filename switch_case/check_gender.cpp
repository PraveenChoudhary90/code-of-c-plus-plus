#include <iostream>
using namespace std;
int main()
{
    char gender = 0;
    cout << "Enter the gender name to check it is male or female" <<" \n";
    cin >> gender;
    switch(gender){
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
            break;
         }
         default:{
            cout << "Other" << "\n";
            break;
         }
         return 0;
    }
    

}