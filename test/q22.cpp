#include <iostream>
using namespace std;
int main()
{
     int c= 45;
     int j =2;
     switch(c-44,j,--c)
     {
        case 1:
        {
            cout << "khatam" << "\n";
        }
        case 0:
        {
            cout << "tata" << "\n";
        }
        case -1:
        {
            cout << "go to home" << "\n";
        }
        default:
        {
            cout << "bahut badiya" <<"\n";
        }
     }
     return 0;

}