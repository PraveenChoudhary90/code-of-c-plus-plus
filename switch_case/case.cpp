#include <iostream>
using namespace std;
int main (){
    int a = 0;
    int b = 0;
    cout << "Enter the value of a" << "\n";
    cin >> a;
    cout << "Enter the value of b" << "\n";
    cin >> b;
    int choice = 0;
    cout << "1 for swap the number" << "\n";
    cout << "2 for maximum the number" << "\n";
    cin >> choice;
    switch(choice){
    case 1:
    {
        int t =0;
        t =a ;
        a = b;
        b = t;
        cout << " after swaped value of a = " << a << "\n";
        cout << " after swaped value of b = " << b << "\n";
        break;

    }
    case 2:
    {
        if( a > b)
        {
            cout << a << "is grater" << "\n";
        }
        else
        {
            cout << b  << "is greater "<< "\n ";
        }
          break;
    }
    default :
    {
        cout << "invalid choice" << "\n";
    }
    break;
    }
    return 0;


}