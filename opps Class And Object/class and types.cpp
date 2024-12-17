#include <iostream>
using namespace std;
class top
{
    int a=10;
    int b=90;
    public:void show(){
        cout << a+b << "\n";
    }
};
class top2{
    int a=10;
    int b=90;
    public:void multi()
    {
        cout << a*b << "\n";
    }
};
int main(){
    top t;
    t.show();
    top2 t2;
    t2.multi();
}