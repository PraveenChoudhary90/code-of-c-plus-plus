#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    int  i = 1;
    int c = 0;
    bool f = false;
    cout << "Enter the number for the square root" << "\n";
    cin >> number;
    do{
        if(i * i == number){
            f= true;
            break;
        }
        c++;
        i++;
    } 
    while(i <= number /2);
    cout << "counting = " << c << "\n";
    if(f == true){
        cout << "valid square root = " << i << "\n";
    }
    else{
        cout << " not valid square root " << "\n";
    }
    return 0;

}