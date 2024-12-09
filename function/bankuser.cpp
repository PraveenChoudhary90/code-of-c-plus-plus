#include <iostream>
using namespace std;
int axis (int cardnumber , int password){
    return 10000;
                                                              
}
int sbi(int cardnumber , int password){
    return 20000;
}
int main(){

    int (*atm)(int ,int );
      atm = sbi;
      cout << "balence=" << atm(3,4);
      atm = axis;
      cout << "balence=" << atm(3,5);

}