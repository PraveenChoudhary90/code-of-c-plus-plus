#include <iostream>
using namespace std;
int main()
{
int arr[2][3];
cout << "Enter the 6 numbers" << "\n";
for(int r = 0;r<2;r++)
{
    for(int c= 0;c<3;c++)
    {
        cin >> arr[r][c];
    }
}
for(int r = 0;r<2;r++)
{
    for(int c= 0;c<3;c++)
    {
    cout <<  arr[r][c] << "\t";
    }
    cout << "\n";
}
cout << "Applying for transpose matrix" << "\n";
for(int c= 0;c<3;c++)
{
    for(int r = 0;r<2;r++)
    {
     cout <<  arr[r][c] << "\t";
    }
    cout << "\n";
}
}