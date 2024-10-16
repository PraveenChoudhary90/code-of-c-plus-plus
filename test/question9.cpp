#include <iostream>
using namespace std;
int main()
{
    int p = 9;
    int c = 3;
    if(--p , c++)
    {
        cout << p + c << "\n";
    }
    else{
        cout << p-c << "\n";
    }
    return 0;
}