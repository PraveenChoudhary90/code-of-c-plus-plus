#include <iostream>
using namespace std;
int fact(int a){
    if(a==0){
        return 1;
    }
    int r = fact(a-1)*fact(a-2);
    return r;
}
int main(){
    int a;
    cout << "Enter the number " << "\n";
    cin >> a;
    cout << fact(a) << "\n";
}