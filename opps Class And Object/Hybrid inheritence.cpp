#include <iostream>
using namespace std;
class RBI{
    public:void hello(){
        cout << "RBI sabka baap" << "\n";
    }
};
class SBI: virtual public RBI{
    public:void m()
    {
        cout << "SBI bank" << "\n";
    }
};
class AXIS: virtual public RBI{
    public:void s(){
        cout << "Axis bank" << "\n";
    }
};
class CUST:public SBI,public AXIS{
    public:void g(){
        cout << "cust bank" << "\n";
    }
};
int main()
{
CUST k;
k.g();
k.m();
k.s();
k.hello();//drabag so wee need to call virtucal
}