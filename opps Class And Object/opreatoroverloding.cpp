#include <iostream>
using namespace std;
class top1{
    int x;
    public:top1(int a)
    {
        x=a;
    }
};
class top2{
    int b;
    public:top2(int a){
        b=a;
    }
};
int main()
{
    top1 a1(100);
    top2 a2(200);
    // cout << a1+a2 << "\n";
}