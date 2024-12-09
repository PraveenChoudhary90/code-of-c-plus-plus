#include <iostream>
using namespace std;
int main()
{
    int *p1;//wild pointer
     cout << p1 << "\n";
    int *p = NULL;//null pointer
    cout << sizeof(p) << "\n";
   
    int r =900;
    p = &r;
    cout << p;

    char *k = "praveen";
    cout << *(k+4);
}