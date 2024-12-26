#include <iostream>
using namespace std;
class AXIS{
    int amount = 10000;
    friend class RBI;

};
class SBI{
    int amount = 30000;
    friend class RBI;
};
class RBI{
    public:void Balanceaxis(AXIS a){
        cout << "Balence of axis="<< a.amount <<"\n";
    }
    public:void Balancesbi(SBI s){
        cout << "Balence of sbi="<< s.amount <<"\n";
    }
};
int main()
{
    AXIS a;
    SBI s;
    RBI r;
    r.Balanceaxis(a);
    r.Balancesbi(s);

}