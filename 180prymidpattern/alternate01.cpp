#include <iostream>
using namespace std;
int main()
{
   for (int i = 1; i <= 5; i++) {
        for(int s = 5;s>i;s--){
            cout << " ";

        }

        for (int j = i; j >=1; j--) {
            
            if (j % 2 == 0) {
                cout << "0 ";
            } else {
                cout << "1 ";
            }
        }
        cout << "\n";
    }

    return 0;
}