#include <iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout << "Enter the size of r1" << "\n";
    cin >> r1;
    cout << "Enter the size of c1" << "\n";
    cin >> c1;
    cout << "Enter the size of r2" << "\n";
    cin >> r2;
    cout << "Enter the size of c2" << "\n";
    cin >> c2;
    if(c1==r2){
         int ans[r1][c2];
         int sum = 0;
         int arr1[r1][c1];
         int arr2[r2][c2];
         cout << "enter values" << r1*c1 << "numbers" << "\n";
        for(int i = 0;i<r1;i++)
        {
            for(int j = 0;j<c1;j++)
            {
                cin >> arr1[i][j];
            }
        }
        cout << "Enter values" << r2*c2 << "numbers" << "\n";
        for(int i =0; i<r2;i++){
            for(int j= 0;j<c2;j++)
            {
                cin >> arr2[i][j];
            }
        }
        cout << "actual data" << "\n";
        for(int i = 0;i<r1;i++)
        {
            for(int j = 0;j<c1;j++)
            {
                cout <<  arr1[i][j] << "\t";
            }
            cout  << "\n";
        }
        for(int i =0; i<r2;i++){
            for(int j= 0;j<c2;j++)
            {
                cout <<  arr2[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "apply matrix multification" << "\n";
        for(int i = 0;i<r1;i++)
        {
            sum = 0;
            for(int j = 0;j<c2;j++)
            {
                for(int k = 0;k<c1;k++)
                {
                    sum = sum + arr1[i][k]*arr2[k][j];
                    ans[i][j]=sum;
                }
            }
        }
        for(int i = 0;i<r1;i++)
        {
            for(int j = 0;j<c2;j++)
            {
                cout << ans[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    else{
        cout << "not allowed" << "\n";
    }
    return 0;
}