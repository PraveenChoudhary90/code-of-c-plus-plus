#include <iostream>
using namespace std;
class student2;
class student1{
    int marks = 90;
    friend void cmp(student1 , student2);
};
class student2{
    int marks  = 75;
    friend void cmp(student1 , student2);
};
 void cmp(student1 s1, student2 s2){
    if(s1.marks > s2.marks){
        cout << "Highest marks of s1" << s1.marks << "\n";
    }
    else{
        cout << "highest marks of s2" << s2.marks << "\n";
    }
 };
 int main()
 {
    student1 s1;
    student2 s2;
    cmp(s1 , s2);
 };
