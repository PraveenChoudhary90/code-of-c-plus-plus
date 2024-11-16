#include <iostream>
using namespace std;
int main()
{
 int arr[] = {7,0,4,0,6,0,11,0,5};
 int len = sizeof(arr)/sizeof(arr[0]);
 int i ;
 for(i = 0; i<len;i++)
 {
  cout << arr[i] << "\t";  
 }
 cout<<"output "<<"\n";
 for(i=0;i<len;i++)
 {
 if(arr[i] == 0)
 {
  arr[i] = 1;
 }
 }
  for(i = 0; i<len;i++)
 {
  cout << arr[i] << "\t";  
 }
}