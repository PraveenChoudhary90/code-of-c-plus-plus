#include <iostream>
using namespace std;
class Joy{
    int a = 10;
    public:void show(){
        cout << "print the value of a=" << a << "\n"; 
    }

};
int main(){
    Joy d;
    d.show();
}
