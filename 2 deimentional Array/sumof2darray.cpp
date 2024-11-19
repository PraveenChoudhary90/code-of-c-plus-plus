#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];
    int sum = 0;
    cout << "Enter the number" << "\n";
    for(int r = 0; r <2;r++)
    {
        for(int c =0;c<3;c++)
        {
            cin >> arr[r][c];
        }
    }
    for(int r = 0; r <2;r++)
    {
        for(int c =0;c<3;c++)
        {
            int a = arr[r][c];
            cout <<  arr[r][c] << "\t";
             sum = sum + a;
        }
       
    }
        cout << "sum=" << sum << "\n";

    
    return 0;

}
