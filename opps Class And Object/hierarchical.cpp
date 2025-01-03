#include <iostream>
using namespace std;
class RBI{
    public:void msg()
    {
        cout << "RBI data" << "\n";
    }
};
class SBI:public RBI{
    public:void S()
    {
        cout << "SBI bank" << '\n';
    }
};
class AXIS:public RBI{
    public:void A(){
        cout << "AIXS bank" << "\n";
    }
};
class PNB:public RBI{
    public:void P()
    {
        cout << "PUNB bank" << "\n";
    }
};
int main()
{
    RBI r;
    r.msg();
    SBI s;
    s.S();
    s.msg();
    AXIS a;
    a.A();
    a.msg();
    PNB p;
    p.P();
    p.msg();
}