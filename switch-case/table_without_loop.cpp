#include <iostream>
using namespace std;
int main(){

 int n, i= 1;
     cout << "Enter the number to generate table" << "\n";
     cin >> n;
     table:
          cout << n*i << "\t";
          i++;
      if(i<=10)
      {
        goto table;
      }
 
}