#include <iostream>
using namespace std;
class RBI{
    public:void hello(){
        cout << "RBI sabka baap" << "\n";
    }
};
class SBI:public RBI{
    public:void msg()
    {
        cout << "SBI bank" << "\n";
    }
};
class AXIS:public RBI{
    public:void msg(){
        cout << "Axis bank" << "\n";
    }
};
class PNB:public RBI{
    public:void msg(){
        cout << "pnb bank" << "\n";
    }
};
int main(){
    RBI s;
    s.hello();
    SBI p;
    p.msg();
    p.hello();
    AXIS k;
    k.msg();
    k.hello();
    PNB m;
    m.hello();
    m.msg();
}
