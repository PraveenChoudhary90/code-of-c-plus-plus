#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12,0,33,1,0,44,22,0,67,78};
    int len =  sizeof(arr)/sizeof(arr[0]);
    int arr2[len];
    int k = 0;
    for(int i = 0; i<len; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "after changes in code" << "\n";
    for(int i = 0;i<len;i++)
    {
        if(arr[i] != 0)
        {
            arr2[k] = arr[i];
            k++;
        }
    }
    
     while(k<len)
        {
            arr2[k]=0;
            k++;
        }
    
    
    for(int i = 0; i<k;i++)
    {
    cout << arr2[i] << "\t";
    }
    
}