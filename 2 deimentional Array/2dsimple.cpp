#include <iostream>
using namespace std;
int main()
{
    int arr[3][3]= {1,4,2,4,5,6,7,8,9};
    for(int r = 0;r<3;r++)
    {
        for(int c = 0;c<3;c++)
        {
            cout << arr[r][c] << "\t";
        }
        cout << "\n";
    }
    return 0;
}