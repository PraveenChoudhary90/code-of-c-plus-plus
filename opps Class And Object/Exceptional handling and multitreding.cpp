#include <iostream>
using namespace std;
// int main(){
//  int  a=9;
//   int  b=0;//exception handing is coming
//     cout<<a/b;
//     cout << "done" << "\n";
// }
// try block and catch block
int main(){
    int a,b;
    cout << "Enter the frist number" << "\n";
    cin >> a;
    cout << "Enter the second number" << "\n";
    cin >> b;
    try{
        if(b<=0){
            throw b;
        }
        cout << a/b  << "\n";
    }
    catch(int b){
        cout << "denominator can not be zero"<< "\n";
    }
    cout << "done" << "\n";
}