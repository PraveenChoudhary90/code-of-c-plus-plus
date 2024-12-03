#include <iostream>
using namespace std;
void tabel(int number){
    for(int i=1;i<=10;i++){
        cout<<  number*i << "\n";
    }
}
int main()
{
  int a;
  cout  << "Enter the number to create table" << "\n";
  cin >> a;
 tabel(a);

}