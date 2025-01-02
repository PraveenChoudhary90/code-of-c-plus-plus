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

    public:void hello(){
        cout << "hello" << "\n";
    }
};
class customer:private sbi, private axis{//jo pahle likenge public ke saath vahi pahle call hoga
    public:customer()
    {
        cout << "customer account memory" << "\n";
        hello();
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