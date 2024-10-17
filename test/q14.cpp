#include <iostream>
using namespace std;
int main()
{
    int a = 9;
    while(a<23){
        if(a%2==0)
        {
            --a;
            cout << a;
        }
        a++;
        
    }
    
}