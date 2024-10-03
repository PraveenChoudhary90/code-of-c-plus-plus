#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int sum = 0;
    cout << "Enter the number" << "\n";
    cin >> number;//6
    int k = number - 1;//5
    while(k >= 1){
        if(number % k == 0){
            //c++;
            sum = sum + k;
        }
        k--;
    }
    if(sum == number){
        cout << "its perfact number" << "\n";
    }
    else{
        cout << "it is not a perfact number" << "\n";
    }
    return 0;
}