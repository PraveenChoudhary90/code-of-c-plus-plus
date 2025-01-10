#include <iostream>
using namespace std;
int main(){
    int b = 0;
    cout << "Enter the number " << "\n";
    cin >> b;
    try{
        if(b==1){
            throw "a";
        }
        else if(b==2){
            throw 22.23;
        }
        else if(b==3){
            throw 3;
        }
        cout << "Welcome" << "\n";
    }
    catch(...){
        cout << "Server down" << "\n";
    }
    cout << "finished" << "\n";
}