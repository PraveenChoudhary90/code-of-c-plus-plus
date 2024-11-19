#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int a,r,c;
    cout << "Enter the number " << "\n";
    for(int r = 0;r<3;r++)
    {
        for(int c= 0;c<3;c++)
        {
            cin >> arr[r][c];
        }
    }
    for(int r = 0;r<3;r++)
    {
        for(int c= 0;c<3;c++)
        {
            if(arr[r][c] % 2 != 0)
            {
              cout<< arr[r][c]<<"\t";
            }
        }
        
    }
     
}