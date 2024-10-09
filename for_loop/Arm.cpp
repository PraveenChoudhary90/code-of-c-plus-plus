#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter the number (100-999)" << "\n";
    cin >>number;
    int renumber = number;
    int sum = 0;
    int count;
    if(number >= 100 && number <= 999){
        while(number > 0){
        count = number % 10;
        sum = sum + (count*count*count);
        number = number / 10;
        }
        if(sum == renumber){
            cout << "its a Armstrong number" << "\n";
            cout << "value of number =" << number << "\n";
        }
        else{
            cout << "it is not a armstrong number" << "\n";
        }
        
    }
    else{
        cout<< "Invalid number" << "\n";
    }
    return 0;

}