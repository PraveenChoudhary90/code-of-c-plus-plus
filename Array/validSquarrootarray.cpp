#include <iostream>
using namespace std;
int main()
{
    int arr[] = {64,24,81,312,25,121,76};
    int len = sizeof(arr)/sizeof(arr[0]);
    int squareroot;
    for(int  i =0; i<len;i++)
    {

        int a = arr[i];
        for( int j = 1;j*j<=a;j++)
        {
            if(j*j == a)
            {
                cout << "sqaurerootarr["<< i <<"]" << "="<< arr[i] << "\t";
                break;
            }
        }
    }
}