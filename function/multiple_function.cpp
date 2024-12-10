#include <iostream>
using namespace std;
void show(int a,int b){//multiple function function name are diffrent but parameter are same or not same
    cout << a+b << "\n";
}
void display(int a){
    cout << a*a << "\n";
}
int main()
{
    show(3,4);
    display(2);
}
