#include <iostream>
using namespace std;
void tabel(int number){
    for(int i = 0;i<=10;i++){ 
        cout << number * i << "\n";
    }
    
}
int main()
{
    int number;
    cout << "Enter the number to create the tabel" << "\n";
    cin >> number;
    tabel(number);
}
