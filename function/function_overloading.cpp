#include <iostream>
using namespace std;
void show(int a,int b){//function overloading function name are same but parameter are diffrent
    cout << a+b << "\n";
}
void show(int a){
    cout << a*a << "\n";
}
int main()
{
    show(3,4);
    show(2);
}
