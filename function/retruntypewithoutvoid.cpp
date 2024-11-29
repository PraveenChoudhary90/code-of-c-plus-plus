#include <iostream>
using namespace std;
 int roi()
    {
        return 3;
    }
 int balance(int psw){
    if(psw ==203){
        return 10000;
    }
    else{
        return -1;
    }

 }
int main()
{
    // return function
    //without parameter & return value
    //with parameter & return value

    cout << balance(203);

   
}