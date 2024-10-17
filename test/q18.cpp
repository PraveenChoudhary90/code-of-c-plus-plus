#include <iostream>
using namespace std;
int main()
{
    int g = 5;
    int j = 7;
    if(g>6 || j<8){
        cout <<(--g)+(j--);
    }
    return 0;
}