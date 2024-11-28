#include <iostream>
using namespace std;
int c;
void sum(int a,int b)//with parameter and no return
{
    c=a+b;
}
void show()//without parameter and no retrun
{
    cout << c <<"\n";
}
int main()
{
    int p,k;
    cout << "Enter the two number" << "\n";
    cin>>p>>k;
    sum(p,k);//call by value
    show();
}