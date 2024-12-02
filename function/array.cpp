#include <iostream>
using namespace std;
void function(int arr[],int length)//arrray asargumnet
{
    for(int i =0;i<length; i++){
        cout << arr[i]+10 << "\n";
    }
}
int main()
{
    int arr[] = {1,3,4,5,6,7,8};
    int s = sizeof(arr)/sizeof(arr[0]);
    function(arr,s);
    cout << "After function calling" << "\n";
     for(int i =0;i<s; i++){
        cout << arr[i] << "\n";
    }
}