#include <iostream>
using namespace std;
class RBI{
    public: virtual void loan()
    {
        cout << "RBI bank" << "\n";
    }
};
class AXIS:public RBI{
    public:void loan()
    {
        cout << "\nAXIS bank";
    }
};
class SBI:public RBI{
    public:void loan()
    {
        cout << "SBI bank" << "\n";
    }
};
int main()
{
    RBI *p;
    AXIS a;
    SBI s;
    p = &a;
    p->loan();

}