#include <iostream>
using namespace std;
int main()
{
    int m[2][2]={1,2,3,4};
    int n[2][4]={1,2,3,4,5,6,7,8};
    int ans[2][4];
    int sum = 0;
    for(int i =0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<< m[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "arr of n" << "\n";
    for(int i = 0; i<2;i++)
    {
        for(int j = 0;j<4;j++)
        {
            cout << n[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "after matirx multificatin logic" << "\n";
    for(int i =0;i<2;i++)
    {
        sum = 0;
        for(int j=0;j<4;j++)
        {
            for(int k = 0;k<2;k++)
            {
                
                sum = sum + m[i][k]*n[k][j];
                ans[i][j] = sum;

            }
        }
    }
    cout << "output" << "\n";
    for(int i =0; i<2;i++)
    {
        for(int j = 0;j<4;j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
        
    
}