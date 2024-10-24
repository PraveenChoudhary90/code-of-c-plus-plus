#include <iostream>
using namespace std;
int main()
{
    for(int r = 1;r<=5;r++)
    {
        for(int s = 5;s>r;s--)
        {
            cout << " ";

        }
        for(int c = r;c>=1;c--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}