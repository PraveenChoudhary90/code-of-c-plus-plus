#include  <iostream>
using namespace std;
int main()
{
    int arr[4] = {1,2,3,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout << "FORWARD TRAVERSING" << "\n";
    for(int  i =0;i<s;i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "BACKWARD TRAVERSING" << "\n";
    for(int i = s-1;i>=0;i--)
    {
        cout << arr[i] << "\n";

    }
    return 0;
}