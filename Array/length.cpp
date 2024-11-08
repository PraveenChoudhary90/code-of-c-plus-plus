#include <iostream>
using namespace std;
int main()
{
    int arr[] = {11,22,33,11,33,55,66,12,44,21,455,776,34,23,565,878};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout << "Array length = " << length << "\n";
    for(int i =0;i<length;i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}