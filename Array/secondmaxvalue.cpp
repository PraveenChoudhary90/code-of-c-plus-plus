#include <iostream>
using namespace std;
int main()
{
    int arr[] = {111,22,445,66,77,88,99,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int secondmax = INT_MIN;
    for(int i = 0; i<len; i++)
    {
    if(secondmax < arr[i])
    {
       secondmax = arr[i];
     }   
    }
    cout << "maximumvalue = " << secondmax << "\n";
}