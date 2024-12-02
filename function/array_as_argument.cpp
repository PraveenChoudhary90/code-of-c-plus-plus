#include <iostream>
using namespace std;
void fun(int arr[], int lenth){
    for(int i=0;i<lenth;i++){
        cout << arr[i] << "\n";
    }
}
int main(){
    int arr[]={2,1,3,4,5,6,7,8,9,21,32};
    int s= sizeof(arr)/sizeof(arr[0]);
    fun(arr,s);
}