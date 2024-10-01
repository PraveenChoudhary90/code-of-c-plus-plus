#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int i = 1;
    int f = false;
    cout << "Enter the number which have square root" << "\n";
    cin >> number;
    do{
        if( i * i == number){
            f = true;
            break;

        }
        i++;
    }
    while(i <= number / 2);
    if(f == true){
        cout << "square root = " << i  << "\n";
   }
   else{
    cout << "not valid square root" << "\n";
   }
   return 0;
}