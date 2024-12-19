#include <iostream>
using namespace std;//default constructor
class top{

    public: top(){ //implicit call
        cout << "cybrom" << "\n";
    }

 public:void show(){ // explicit call
    cout << "hello" << "\n";
 }
};
int main()
{
    top t;
    t.show();

}