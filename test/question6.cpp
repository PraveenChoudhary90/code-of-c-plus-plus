#include <iostream>
using namespace std;
int main()
{
    int s = 45;
    int &f = s;
    cout << f--;
    return 0;
}