#include <iostream>
using namespace std;
int main()
{
    int arr[]={23,34,23,25};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Length of array=" << len << "\n";
    for(int  i=0;i<len;i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}