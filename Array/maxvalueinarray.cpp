#include <iostream>
using namespace std;
int main()
{
    // one dimension array
    int arr[] = {10,25,33,4,45,433,22,66,77,11,90};
    int max = INT_MIN;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<len ; i++)
    {
    if(max < arr[i])
    {
        max = arr[i];
    }
    }
    cout << "mixmumvalue = " << max << "\n";
}