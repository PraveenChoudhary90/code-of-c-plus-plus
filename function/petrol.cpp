#include <iostream>
using namespace std;
int dealer(int leter)
{
    return 90*leter;
}
int main()
{
    int kitneleter;
    cout << "Enter the quentity of leter" << "\n";
    cin >> kitneleter;
    cout << "rate=" << dealer(kitneleter)+(5*kitneleter) << "\n";
}