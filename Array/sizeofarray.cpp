#include <iostream>
using namespace std;
int main()
{
    int amount[5]={10,2,3,4,55};
    cout <<sizeof(amount)<<"\n";
    cout << amount[4] << "\n";
    for(int i = 0;i<5;i++)
    {
        cout << amount[i] << "\n";
    }
    return 0;

}