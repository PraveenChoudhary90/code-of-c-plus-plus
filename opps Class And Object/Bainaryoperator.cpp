#include <iostream>
using namespace std;
class bhopal{
    int mile;
    public:bhopal(int m)
    {
        mile = m;
    }
     void operator - (bhopal &obj){
        mile = obj.mile - mile;
        cout << "Total k.m=" << mile << "\n";
     }
};
int main()
{
    bhopal start(12400);
    bhopal ends(12580);
    start-ends;
}