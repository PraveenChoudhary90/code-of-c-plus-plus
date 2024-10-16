#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 45;
    int c = --a;
      b = c++;
    cout <<  b+c << "\n";
    return 0;
}