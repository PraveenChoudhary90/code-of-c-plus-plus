#include <iostream>
using namespace std;
int main()
{
    int s = 9;
    int j = 0;
    while(s || j){
        cout << --s << "\n";
        j++;
    }
    return 0;

}