#include <iostream>
using namespace std;
int main()
{
    int  arr[]={1,3,5,2,4,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<len;i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "After" << "\n";
    for(int i = 0;i<len;i++)
    {
        for(int j= 0;j<len-1;j++)
        {
            int temp;
            {
                if(arr[j]>arr[j+1])
                {
                    temp = arr[j+1];//num1
                    arr[j+1]=arr[j];//num2
                    arr[j]=temp;
                }
            }
        }
    }
     for(int i = 0; i<len;i++)
    {
        cout << arr[i] << "\t";
    }
}