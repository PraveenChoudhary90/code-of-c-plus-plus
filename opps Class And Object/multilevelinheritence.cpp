#include <iostream>
using namespace std;
class RBI{
    int t;
    public:void display(){
        cout << "RBI class" << "\n";
    }
};
class SBI{
    int t;
    public:void show(){
        cout << "SBI class" << "\n";
    }
};
class CUST{
    int t;
    public:void account(){
        cout << "cust class" << "\n";
    }
};
int main()
{
    CUST s;
    s.display();
    s.show();
    s.account();
}