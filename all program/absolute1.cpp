#include <iostream>
using namespace std;
int main(){
    int a = 0;
    cout << "Enter the number " << "\n";
    cin >> a;
    if(a > 0){
        cout << a  << "=" << "its a absolute number" << "\n";
    }
    else{
        cout << -a  << "= " << "its a absolute number" << "\n";
    }
    return 0;

}