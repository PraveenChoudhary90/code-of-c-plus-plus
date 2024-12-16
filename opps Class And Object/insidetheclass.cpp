#include <iostream>
using namespace std;
class top1{
    int a=10;
    int b = 90;
    public:int sum(){
        return a+b;
    }
};
int main(){
    top1 pk;
    cout << pk.sum() << "\n";
}