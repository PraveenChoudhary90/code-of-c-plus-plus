#include <iostream>
#include <string.h>
using namespace std;
class Student{
    char *c;
    public:Student(char *s){
        c =new char[20];
        strcpy(c,s);
    }
    Student(Student &obj){
        c=new char[20];
        strcpy(c,obj.c);
    }
    void show(){
        cout << "name=" << c << "\n";
    }
    void surname(char *s){
        strcat(c,s);

    }
};
int main(){
    Student s1("praveen");
    s1.show();
    Student s2(s1);
    s2.show();
    s2.surname("choudhary");
    cout << "updated by s1 \n";
    s1.show();
    cout << "upadetd by s2 \n";
    s2.show();
}
