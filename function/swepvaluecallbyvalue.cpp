#include <iostream>
using namespace std;
void swaps(int a , int b){
    int c;
    c = a;
    a=b;
    b=c;
    cout << "after swap of a=" << a << "\n";
    cout << "after swap of b=" << b << "\n";
}
int main()
{
    int a ,b ;
    cout << "Enter the two numbers" << "\n";
    cin >> a>> b;
    swaps(a,b);//call by value
    cout << "after swap of a=" << a<< "\n";
    cout << "after swap of b=" << b<< "\n"; 
    
}