#include <iostream>
using namespace std;
class Axis{
    int amount = 500;
    friend class RBI;
};
class SBI{
    int amount = 1000;
    friend class RBI;

};
class RBI{
    public:void BalenceofAxis(Axis a){
        cout << "Amount of Axis Bank Debit=" << a.amount << "\n";
    };
    public:void BalenceofSbi(SBI s){
        cout << "Amount of SBI bank debit = "<< s.amount <<"\n";
    };

};
int main(){

Axis a;
SBI s;
RBI r;
r.BalenceofAxis(a);
r.BalenceofSbi(s);
}