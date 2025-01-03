#include <iostream>
using namespace std;
class RBI{
    public:void msg()
    {
        cout << "RBI bank sab banko ka bank" << "\n";
    }
};
class SBI:virtual public RBI{
    public:void S()
    {
        cout << "SBI bank" << "\n";
    }
};
class AIXS: virtual public RBI{
    public:void A()
    {
        cout << "AXIS bank " << "\n";
    }
};
class CUST:public SBI, public AIXS{
    public:void K()
    {
        cout << "CUST DATA " << "\n";
    }
};
int main()
{
    CUST p;
    p.S();
    p.A();
    p.K();
    p.msg();
}
