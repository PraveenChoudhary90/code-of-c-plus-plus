#include <iostream>
using namespace std;
class sbi{
    public:sbi()
    {
        cout << "sbi account memory" << "\n";
    };
    ~sbi()
    {
      cout << "sbi account delete" << "\n";
    }
};
class axis{
    public:axis()
    {
        cout << "axis account memory" << "\n";
    };
    ~axis()
    {
      cout << "axis account delete" << "\n";
    }
};
class customer:public sbi, public axis{//jo pahle likenge public ke saath vahi pahle call hoga
    public:customer()
    {
        cout << "customer account memory" << "\n";
    };
    ~customer()
    {
      cout << "customer account delete" << "\n";
    }
};
int main()
{
    customer ct;
}