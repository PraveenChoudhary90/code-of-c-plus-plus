#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  //char c[5]="punam";//onr byte char leta hai or null rakta hai one byte;
  char c[6]="punam";
   ///c = "punam"; char constent hota hai isliye reinislised nhi kar sakte hai;const
  cout << c << "\n";

  cout << "Enter the name" << "\n";
  cin >> c;
  cout << "your name=" << c;



}