#include <iostream>
using namespace std;
int main()
{
    for(int r = 65;r<=67;r++)
    {
        for(int s = 67;s>r;s--)
        {
            cout << " ";
        }
        for(int c = 65;c<=r;c++)
        {
            cout << char(r) ;
        }
        cout << "\n";
    }
    return 0;
}
