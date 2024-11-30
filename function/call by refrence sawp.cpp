#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int p ,k;
    cout << "ENter the two numbers" << "\n";
    cin >> p>> k;
    swap(p,k);
    cout << "after the swap a=" << p << "\n";
    cout << "after the swap b=" << k << "\n";

}