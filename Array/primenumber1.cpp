#include <iostream>
using namespace std;
int main()
{
    int arr[] = {11,22,33,2,3,5,67,47};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<len;i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "only prime numbers" << "\n";
    for(int i = 0;i<len;i++)
    {
      int n = arr[i];
      int r = n-1;
      bool b = true; 
      for(r;r>1;r--)
      {
      if(n%r ==0)
      {
        b= false;
        break;
      } 
      }
    
    if(b==true)
    {
        cout << n << "\t";
    }
    }
}