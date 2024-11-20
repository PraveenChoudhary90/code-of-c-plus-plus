#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Ente the row size" << "\n";
    cin >> x;
    cout << "Enter the column size" << "\n";
    cin >> y;
    int arr[x][y];
    cout << "Enter " << x*y << " numbers" << "\n";
    for(int r= 0;r<x;r++)
    {
        for(int c= 0;c<y;c++)
        {
         cin >> arr[r][c];
        }
    }
    cout << "After  get input print original array " << "\n";
    for(int r = 0;r<x;r++)
    {
        for(int c = 0; c<y;c++)
        {
            cout << arr[r][c] << "\t";
        }
        cout << "\n";
    }
    if(x==y)
    {
        cout << "After apply square/ transpose matrix its covert r=>c after c=>r" << "\n";
        for(int c= 0;c<y;c++)
        {
            for(int r= 0;r<x;r++)
            {
                cout << arr[r][c] << "\t";
            }
            cout << "\n";
        }
    }
    else{
        cout << " row and column size are not eqaul " << "\n";
    }
    return 0;
 }