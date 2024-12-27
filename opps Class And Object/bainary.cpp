#include <iostream>
using namespace std;
class bhopal{
    int mile;
    public:bhopal(int m){
        mile=m;
    }
    void operator -(bhopal &obj){
        mile = obj.mile-mile;
        cout << "Total kilometer=" << mile << "\n";

    }
};
int main()
{
    bhopal a(12400);
    bhopal b(12580);
     a-b;
}