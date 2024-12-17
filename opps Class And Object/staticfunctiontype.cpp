#include <iostream>
using namespace std;
class top{
   static int a;
    static int b;
    public:static void sum()
    {
        cout << a+b;
    }
};
int top::a =90;
int top::b=10;
int main()
{
    top::sum();
}