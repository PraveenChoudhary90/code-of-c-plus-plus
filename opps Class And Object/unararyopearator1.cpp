#include <iostream>
using namespace std;
class top{
    int a =10;
    public:void operator ++()
    {
        a++;
   cout << a << "\n";
   
    }
    public:void operator --()
    {
        a--;
        cout << a << "\n";
        
    }
};
int main()
{
    top p;
    ++p;
    --p;
}