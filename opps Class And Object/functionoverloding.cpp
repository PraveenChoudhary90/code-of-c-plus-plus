#include <iostream>
using namespace std;
class top{
    int a=10 , b=90;//function overloding
    public:void sum(){
        cout << a+b <<"\n";
    }
    void sum(int p,int k,int r)//function overloding
    {
        cout << p+k+r << "\n";
    }
};
int main(){
    top f;
    f.sum();
    f.sum(1,5,7);
}
