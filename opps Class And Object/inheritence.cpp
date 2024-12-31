#include <iostream>
using namespace std;
class RBI{
    int t ;
    public:RBI()//constructor
    {
        cout << "rbi mempry" << "\n";
    }
    ~RBI()//distructor
    {
        cout << "rbi memory released" << "\n";
    }
    public:void show(){//function
        cout << "rbi class" << "\n";
    }
};
class SBI:public RBI//single inheritence
{
    int a ;
    public:SBI()//constructor
    {
        cout << "sbi memopry" << "\n";
    }
    ~SBI()//distructor
    {
        cout << "sbi memory released" << "\n";
    }
    public:void show(){//function
        cout << "sbi class" << "\n";
    }

};
int main()
{
  SBI s;
  s.show();
  cout << "size of sbi=" << sizeof(s) << "\n";  
}