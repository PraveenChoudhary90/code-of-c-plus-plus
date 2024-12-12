#include <iostream>
using namespace std;
int facttoriyal(int a ){
    if(a==0){
        return 1 ;
    }

   return(a*facttoriyal(a-1));
    

}
int main(){
    int num ; 
    cout << "Enter the number to create factoriyal" << "\n";
    cin >> num;
   cout << "factoriyal=" <<  facttoriyal(num) << "\n";
}
