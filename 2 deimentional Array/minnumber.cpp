#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];
    int min = INT_MAX;
    for(int i = 0;i<2;i++)
    {
        for(int j= 0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }
     for(int i = 0;i<2;i++)
    {
        for(int j= 0;j<3;j++)
        {
            if(min > arr[i][j])
            {
                min =   arr[i][j];
    
            }
           
        }
        cout << "\n";
    }
     cout <<  min << "\t";
}