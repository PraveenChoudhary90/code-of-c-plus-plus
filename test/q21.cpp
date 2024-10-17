#include <iostream>
using namespace std;
int main()
{
    int k =23;
    int g = 2;
    while(k<31)
    {
        k = k+g;
        if(k < 9)
        {
            --k;
        }
        else{
            --g;
        }
        cout << k+g;
    }
    return 0;
}