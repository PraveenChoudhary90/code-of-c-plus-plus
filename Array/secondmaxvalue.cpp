#include <iostream>
using namespace std;
int main()
{
    int arr[] = {111,22,445,66,77,88,99,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int firstmax = INT_MIN , secondmax = INT_MIN;
    for(int i = 0; i<len; i++)
    {
     if (arr[i] > firstmax) {
            secondmax = firstmax;
            firstmax = arr[i];
  
     }
      else if (arr[i] > secondmax && arr[i] < firstmax) {
            secondmax = arr[i];
          
        }   
    }
    cout << "maximumvalue1 = " << firstmax<< "\n";
    cout << "maximumvalue2 = " << secondmax << "\n";
    
}