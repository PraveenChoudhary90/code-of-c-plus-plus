#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12,33,44,66,78,1,2,3,54,67};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max2 , max1;
 max2 , max1 = INT_MIN;
 for(int i =0; i<len;i++)
 {
  if(arr[i]> max1)
  {
    max2 = max1;
    max1 = arr[i];
  }
  else if(arr[i] > max2 && arr[i] < max1)
  {
    max2 = arr[i];
  }
 }
 cout << "max2 value ="  << max2;
}