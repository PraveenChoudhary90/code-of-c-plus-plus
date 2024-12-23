#include <iostream>
#include <string.h>
using namespace std;

class student{
    char *c;
    public:student(char *s){
        c =new char[20];
        strcpy(c,s);
    }
    void show()
    {
        cout << "name="<< c  << "\n";
    }
    void surname(char *s)
    {
        strcat(c,s);
    }

};
int main(){
    student s1("praveen");
    s1.show();
    student s2(s1);
    s2.show();
    student surname("choudhary");
    s1.show();
    s2.show();

}