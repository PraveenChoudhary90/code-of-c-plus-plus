#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int f = false;
    cout << "Enter the number which is prime number or not" << "\n";
    cin >> number;
    int k = number - 1;
    do{
        if(number % k ==0){
            f = true;
            break;
        }
        k--;

    }
    while(k > 1);
    if( f == true){
        cout << "not prime number" << "\n";

    }
    else{
        cout << "prime number" << "\n";

    }
    return 0;
}