#include <iostream>
using namespace std;
class top{
    public:void show(){
        cout << "Top class" << "\n";
    }
};
class btm:public top{
    public:void show(){
        cout << "bottom class" << "\n";
    }
};
int main(){
    btm obj;
    obj.show();
}
