#include <iostream>
using namespace std;
void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int a,b;
    cout << "enter the two numbers" << "\n";
    cin>> a>>b;
    swap(a,b);
    cout << "after the swaping a=" << a << "\n";
    cout << "after the swaping b=" << b << "\n";
}
