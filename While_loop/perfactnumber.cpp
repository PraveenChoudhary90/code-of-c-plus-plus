#include <iostream>
using namespace std;
int main(){
    int number = 0;
    int i = 1;
    int sum = 0;
    cout << "Enter the number" << "\n";
    cin >> number;
    while(i < number){
        if(number % i ==0)
            sum = sum + i;
            i++;
    }
    if(sum == number){
        cout << i << "Its a perfact number" << "\n";
    }
    else{
        cout << i << "This not a perfact number" << "\n";
    }
             
    
    return 0;
}