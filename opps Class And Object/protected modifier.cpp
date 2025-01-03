#include <iostream>
using namespace std;
class college{
    protected:void show()
    {
        cout << "\n college\n";
    }
};
class student:public college
{
    public:void msg()
    {
        cout << "student" << "\n";
        show();
    }
};
int main()
{
    student s;
    s.msg();
}
