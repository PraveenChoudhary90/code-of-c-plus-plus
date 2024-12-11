#include <iostream>
using namespace std;
void tabel(int a , int b){
    if(b >10){
        return;
    }
   
    cout << a* b << "\t";
     tabel(a ,b+1);
    
}
int main(){
    int a ;
    cout << "Enter the number" << "\n";
    cin >> a;
    tabel(a,1);
}