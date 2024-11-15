#include <iostream>
using namespace std;
int main()
{
 int arr[] = {7,4,6,11,5};
 int len = sizeof(arr)/sizeof(arr[0]);
 for(int i = 0; i<len;i++)

 {

    cout << arr[i] << "\t";
    
 }
 cout << "after\n";
 for(int i = 0;i<len;i++)
 {
    for(int j = 0;j<len-1;j++)
    {
        int temp;
        if(arr[j]<arr[j+1])
        {
            temp = arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
 }
 for(int  i = 0;i<len;i++)
 {
    cout << arr[i] << "\t";
 }
}