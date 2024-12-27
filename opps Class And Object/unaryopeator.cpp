#include <iostream>
using namespace std;
class top{
    int a =10;
    public:void operator++()
    {
        a++;
        cout << a << "\n";
        // return 0;

    }
    public:void operator--()
    {
        a--;
        cout << a << "\n";
        // return 0;
    }
    
};
int main()
{
    top p ;
    ++p;
    --p;
    // int a =90;
    // a++;
    // cout << a << "\n";
}