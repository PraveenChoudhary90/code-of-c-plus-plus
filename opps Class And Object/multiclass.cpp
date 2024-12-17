#include <iostream>
using namespace std;
class top{
    int a =1000;
    int b = 900;
    public:void sum(){
        cout << a+b << "\n";
    }
};
class top1{
    int a =10;
    int b =9;
    public:void multi()
    {
        cout << a*b << '\n';
    }
};
int  main()
{
    top k;
    k.sum();
    top1 l;
    l.multi();
}