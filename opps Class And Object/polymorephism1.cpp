#include <iostream>
using namespace std;
class RBI{
    public: virtual void loan(){
        cout << "RBI class" << "\n";
    };
    public:virtual void show(){
        cout << "RBI bank" << "\n";
    }
};
class AXIS:public RBI{
    public:void loan(){
        cout << "Axis class" << "\n";
    }
    void show(){
        cout << "Axis bank" << "\n";
    }
};
class SBI:public RBI{
    public:void loan(){
        cout << "\n SBI class" << "\n";
    }
};
int main(){
    RBI *p;
    AXIS a;
    SBI s;
    p=&a;
    p->loan();
    p->show();
}