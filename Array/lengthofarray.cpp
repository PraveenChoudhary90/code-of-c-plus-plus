#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,23,4,4,5,6,6,7,7,78,8,9,9,9,9,9,9,9,9,9,9,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << len << "\n";
    for(int i = 0;i<len;i++)
    {
        cout << arr[i] << "\n";
    }
}