#include <iostream>
using namespace std;
int main(){
    int b;
    cout << "Enter the number either 1,2,3," << "\n";
    cin>> b;
    try{
        if(b==1){
            throw 'a';
        }
        else if(b==2){
            throw 34.56;
        }
        else if(b==3){
            throw 3;
        }
        cout << "Welcome" << "\n";
    }
    // catch(...){
    //     cout << "server down" << "\n";
    // }
    catch(int n){
        cout << "integer value" << "\n";
    }
    catch(char n){
        cout << "char value" << "\n";
    }
    catch(double n){
        cout << "float value" << "\n";

    }
    cout << "finished" << "\n";
}