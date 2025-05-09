#include <iostream>
using namespace std;

int fact(int a){
    if(a==0){
        return 1;
    }
    else if(a<0){
        return 0;
    }
    int r= fact(a-1)+fact(a-2);
    return r;
}


int main(){
    int a;
    cout << "Enter the Number" << "\n";
    cin>> a;
    cout << "Fobonic serice is here" << fact(a) << "\n";
}
