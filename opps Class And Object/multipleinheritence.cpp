#include <iostream>
using namespace std;
class sbi{
    public:void sbiacnt()
    {
        cout << "sbi account" << "\n";
    }
};
class axis{
    public:void axisacnt(){
        cout << "axis account" << "\n";

    }
};
class customer:public sbi, public axis{
    public:void msg()
    {
      cout<< "Welcome\n";
    }
    
};
int main()
{
    customer ct;
    ct.msg();
    ct.axisacnt();
    ct.sbiacnt();
}