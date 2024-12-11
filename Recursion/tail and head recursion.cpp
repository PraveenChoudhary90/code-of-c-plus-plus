#include <iostream>
using namespace std;
void cybrom(int a){
    if(a<1){
        return;
    }
    cout << "head recursion=" << a << "\t";//head recursion
    cout << "\n";
    cybrom(a-1);
    cout << "tail recursion = " << a << "\t";//tail recursion

}
int main(){
    cybrom(5);
}