#include <iostream>
using namespace std;
void facttoriyal(int a ,int b){
    if(a<1){
        return;
    }
    cout << a*b << "\t";

}
int main(){
    int num ; 
    cout << "Enter the number to create factoriyal" << "\n";
    cin >> num;
    facttoriyal(num , 1);
}
