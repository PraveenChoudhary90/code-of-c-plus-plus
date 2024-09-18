#include <iostream>
using namespace std;
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Enter the frist number" << "\n";
    cin >> a;
    cout << "Enter the second number" << "\n";
    cin >> b;
    cout << "Enter the third number"  << "\n";
    cin >> c;
    if(a > b && a > c) {
        cout << a << "is large" << "\n";
    }
    else if(b > a && b > c){
        cout << b << "is large" << "\n";
    }
    else{
        cout << c << "is large" << "\n";
    }
    return 0;
    
} 