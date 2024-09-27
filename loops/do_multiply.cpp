#include <iostream>
using namespace std;
int main()
{
    int sum = 1;
    int i = 1;
    do{

        sum = sum * i;
         i++;
        
       }
       while(i <= 10);
       cout << sum <<"\n";
}