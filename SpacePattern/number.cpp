#include <iostream>
using namespace std;
int main()
{
    for(int r=1;r<=3;r++)
    {
        for(int s=3;s>r;s--)
        {
            cout << " ";
        }
        for(int c =r;c>=1;c--)
        {
            cout << c ;
            
        }
        cout << "\n";
    }
    return 0;
}