#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int i = 0;
    bool f = false;
    cout << "Enter the number which is prime or not" << "\n";
    cin >> number;
    int k = number-1;
    do{
        if(  number % k ==0){
        f = true;
        break;
        }
        k--;
    }
    while(k > 1);
    if(f == true){
        cout << "number is not prime number" << "\n";
    }
    else{
        cout << "number is  a prime number" <<"\n";
    }
    return 0;
}