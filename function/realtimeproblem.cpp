#include <iostream>
using namespace std;
int dealer(int count){
    return 90*count;
}
int main(){
    int leter;
    cout << "Enter the kitne leter" << "\n";
    cin >>leter;
    cout << "rate="<< dealer(leter)+(5*leter)<<"\n";
    
}