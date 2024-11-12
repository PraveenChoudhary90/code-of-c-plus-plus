#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<len;i++)
    {
        if(arr[i] % 2 != 0)
        {
            cout << arr[i] << "\n";
        }
    }
    return 0;
}