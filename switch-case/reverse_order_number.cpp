#include <iostream>
using namespace std;
int main()
{
      // reverse order   tabel
 int num, a= 10;
     cout << "Enter the number to generete table" << "\n";
     cin >> num;
     table1:
          cout << num*a << "\t";
          a--;
      if(a>=1)
      {
        goto table1;
      }
// 10 to 1 ginti
    int n = 10;
    number:
    cout << n << "\t";
    n--;
    if(n >=1){
     goto number;
    }
}