#include <iostream>
using namespace std;
int main()
{
    int arr[2][3]= {1,3,5,2,4,6};
    for(int r = 0;r<2;r++)
    {
        for(int c = 0;c<3;c++)
        {
            cout << arr[r][c] << "\t";
        }
        cout << "\n";
    }
}
