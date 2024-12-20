#include <iostream>
using namespace std;
class student{
    public:int r;
    public:student(int rno){
        r = rno;

    }
    void show()
    {
        cout << "Roolnumber=" << r << "\n";
    }
};
int main(){
    student s(100);
    s.show();
    student s2(s);//shallow copy
    s2.show();
}