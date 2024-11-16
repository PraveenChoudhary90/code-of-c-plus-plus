#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12,33,0,5,6,40,67,43,9,0,4,0,2};
    int len = sizeof(arr)/sizeof(arr[0]);
     int arr2[len];
     int k = 0;
     for(int i = 0; i<len;i++)
     {
        cout<<arr[i] << "\t";
     }
     cout << "Updata codefrom all zero right side" << "\n";
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
        arr2[k] =0;
        k++;
     }
     for(int i = 0;i<k;i++)
     {
        cout << arr2[i] << "\t";
     }

}