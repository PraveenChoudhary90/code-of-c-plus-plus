#include <iostream>
using namespace std;
class student{
    int rno;
    public:student(int rno){
        this->rno = rno;//this pointer

    }
    void show()
    {
        cout << "Roolnumber=" << rno << "\n";
    }
};
int main(){
    student s(100);
    s.show();
}