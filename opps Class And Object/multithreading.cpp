#include <iostream>
#include <thread>
using namespace std;
void  even(int start,int ends){
    for(int i=start;i<=ends;i++){
        if(i%2==0){
            cout << "Even number=" << i << "\t";
        }
    }
};
void  odd(int start,int ends){
    for(int i=start;i<=ends;i++){
        if(i%2!=0){
            cout << "odd number=" << i << "\n";
        }
    }
};
int main(){
    thread t1(even,1,100);
    thread t2(odd,1,100);
    t1.join();
    t2.join();
    cout << "\nFinished" << "\n";
}