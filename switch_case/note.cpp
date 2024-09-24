#include <iostream>
using namespace std;
int main()
{
    int amount = 0;
    cout << "Enter the amount" << "\n";
    cin >> amount;
    int n1 = 0;
    int n2 = 0;
    int n5 = 0;
    int n10 = 0;
    int n20= 0;
    int n50 = 0;
    int n100 = 0;
    int n200 = 0;
    int n500 = 0;
    if(amount >= 500){
        n500 = amount / 500;
        amount = amount - n500 * 500;
    }
     if(amount >= 200){
        n200 = amount / 200;
        amount = amount - n200 * 200;
    }
     if(amount >= 100){
        n100 = amount / 100;
        amount = amount - n100 * 100;
    }
     if(amount >= 50){
        n50 = amount / 50;
        amount = amount - n50* 50;
    }
     if(amount >= 20){
        n20 = amount / 20;
        amount = amount - n20 * 20;
    }
     if(amount >= 10){
        n10 = amount / 10;
        amount = amount - n10 * 10;
    }
     if(amount >= 5){
        n5 = amount / 5;
        amount = amount - n5 * 5;
    }
     if(amount >= 2){
        n2 = amount /2;
        amount = amount - n2 * 2;
    }
     if(amount >= 1){
        n1 = amount / 1;
        amount = amount - n1 * 1;
    }
    cout << "500 rs = " << n500 << "\n";
    cout << "200 rs = " << n200<< "\n";
    cout << "100 rs = " << n100 << "\n";
    cout << "50 rs = " << n50 << "\n";
    cout << "20 rs = " << n20 << "\n";
    cout << "10 rs = " << n10<< "\n";
    cout << "5 rs = " << n5 << "\n";
    cout << "2 rs = " << n2 << "\n";
    cout << "1 rs = " << n1 << "\n";
    return 0;
 }