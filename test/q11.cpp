#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;
    if(a >> 2 || a&b){
        cout << a;
    }
    else{
        cout << a--;
    }
    return 0;
}