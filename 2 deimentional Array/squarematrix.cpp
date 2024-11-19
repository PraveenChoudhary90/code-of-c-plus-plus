#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter the size of row" << "\n";
    cin >> x;
    cout << "Enter the size of colum" << "\n";
    cin >> y;
    int arr[x][y];
cout << "Enter " << x*y <<  "numbers" << "\n";
for(int r = 0;r<x;r++)
{
    for(int c= 0;c<y;c++)
    {
        cin >> arr[r][c];
    }
}
for(int r = 0;r<x;r++)
{
    for(int c= 0;c<y;c++)
    {
    cout <<  arr[r][c] << "\t";
    }
    cout << "\n";
}
if(x==y)
{
cout << "Applying for transpose matrix" << "\n";
for(int c= 0;c<y;c++)
{
    for(int r = 0;r<x;r++)
    {
     cout <<  arr[r][c] << "\t";
    }
    cout << "\n";
}
}
else{
    cout << "Not allowed bcx size are not equal" << "\n";
}
}
