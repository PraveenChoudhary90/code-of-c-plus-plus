#include <iostream>
using namespace std;
class dp{
    public:dp(){
        cout << "Memory allocated" <<"\n";
    }
    ~dp()//disctructor show icon ~ and it is delete the the memory of object;
    {
        cout << "memory released(delete)" << "\n";
    }
    void show(){
        cout << "Welcome" << "\n";
    }

};
int main()
{
    dp d1;
    d1.show();
}