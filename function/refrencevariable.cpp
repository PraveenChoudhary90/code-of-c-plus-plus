#include <iostream>
using namespace std;
int main()
{
    int a =20;
    int &b = a;
    b = 90;
    a =9000;
    cout << "a="<<a << "\n";
    cout << "b="<<b << "\n";
}