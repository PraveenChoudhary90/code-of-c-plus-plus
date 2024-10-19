#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int colum = 3;
    for(int i =0;i<row;i++)
    {
        for(int j =0; j<=i;j++)
        {
            cout << i+1 << "\t";
        }
        cout << "\n";
    }
    return 0;
}