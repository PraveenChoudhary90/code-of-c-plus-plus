#include <iostream>
using namespace std;
class top{

    public:top(){

    cout << "default" << "\n";
}
public:void show()
{
    cout << "\n Hello";
}
};
int main()
{
    top t;
    t.show();

}