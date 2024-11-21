#include <iostream>
using namespace std;
int main()
{
    int r;
    int c;
    cout << "Enter the size of row" << "\n";
    cin >> r;
    cout << "Enter the size of column" << "\n";
    cin >> c;
    if(r==c)
    {
        int arr[r][c];
       cout << "enter " << r*c << " number" << "\n";
       for(int i = 0;i<r;i++)
       {
        for(int j = 0;j<c;j++)
        {
            cin >> arr[i][j];
        }
       }
       cout << "like array" << "\n";
        for(int i = 0;i<r;i++)
       {
        for(int j = 0;j<c;j++)
        {
         cout << arr[i][j] << "\t";
        }
        cout << "\n";
       }
       for(int i = 0;i<r;i++)
       {
        for(int j = i+1;j<c;j++)
        {
            int temp = arr[i][j];
             arr[i][j]= arr[j][i];
          arr[j][i] = temp;
        }
       }
       cout << "After transposematrix" << "\n";
        for(int i = 0;i<r;i++)
       {
        for(int j = 0;j<c;j++)
        {
            cout <<  arr[i][j] << "\t";
        }
        cout << "\n";
       }
    }
    else{
        cout << "not allowed" << "\n";
    }
    return 0;
    
}