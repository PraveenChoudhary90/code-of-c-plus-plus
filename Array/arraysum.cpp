#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int arr[] = {19,2,3,4,5,6,67,34};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int  i = 0; i<len; i++)
    {
        sum = sum + arr[i];

    }
    cout << sum << "\n";
    return 0;
}