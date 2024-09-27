#include <iostream>
using namespace std;
int main()
{
    int number = 1;
    int sum = 0;
    do{
        sum = sum + number;
        number++;

    }
    while(number <= 10);
    cout << sum << "\n";
    return 0;
}