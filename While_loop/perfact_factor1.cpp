#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int sum = 0;
    cout << "Enter the number and check it is perfact or not" << "\n";
    cin >> number;
    int count = 0;
    int k = number -1;
    while(k >= 1 ){
        if(number % k == 0){
            sum = sum + k;
        }
        count++;
        k--;
    }
    cout << count << "\n";
    if(sum == number){
        cout << "its  a perfact number" << "\n";
    }
    else{
        cout << "its not a perfact number" << "\n";
    }
    return 0;
}