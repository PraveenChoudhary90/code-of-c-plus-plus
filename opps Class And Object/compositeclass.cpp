#include <iostream>
using namespace std;
class virus{
    public:void affect()
    {
        cout << "Ur system got hacked\n";
    }
};
class Reward //composite
{
virus v;
public:void Prize()
{
    cout << "U win $2000000\n";
    v.affect();
}
};
int main(){
    Reward r;
    r.Prize();
}