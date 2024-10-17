#include <iostream>
using namespace std;
int main()
{
    int a = 90;
    int b = 34;
    switch(a/b)
    {
        default:
        {
            cout << "fail ho jao" << "\n";
        }
        case 1:
        {
            cout << "ok" << "\n";
        }
        case 0:
        {
            cout << "well" << "\n";
        }
    }
}