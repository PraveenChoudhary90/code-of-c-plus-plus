#include <iostream>
using namespace std;
int fact(int a){
    if(a==0){
        return 1;
    }
    if(a<0){
        return 0;
    }
    int r = fact(a-1)+fact(a-2);
    return r;
}
int main(){
    int a;
    cout << "Enter the number " << "\n";
    cin >> a;
    cout << "fibonacci nth term serise =" <<  fact(a) << "\n";
}