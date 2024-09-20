#include <iostream>
using namespace std;
int main(){
    float maths = 0;
    float phy = 0;
    float chem = 0;
    cout << " Enter the marks of maths " << "\n";
    cin >> maths;
    cout << "Enter the marks of physics" << "\n";
    cin >> phy;
    cout << "Enter the marks of chemestry" << "\n";
    cin >> chem;
    float total = maths + phy + chem;
    float percentage = total /3;
    if(maths < 35 && phy < 35 && chem >= 35){
        cout << "fail" << "\n";
    }
    else if(maths >= 35 && phy < 35 && chem < 35){
        cout << "fail" << "\n";
    }
    else if(maths < 35 && phy >= 35 && chem < 35){
        cout << "fail" << "\n";
    }
    else if(maths < 35 && phy >= 35 && chem >= 35){
        cout << "You got supply in maths" << "\n";
    }
    else if(maths >= 35 && phy < 35 && chem >= 35){
        cout << "You got supply in physics" << "\n";
    }
    else if(maths >= 35 && phy >= 35 && chem < 35){
        cout << "You got supply in chemestry" << "\n";
    }
    else if(percentage >= 60 && percentage <= 100){
        cout << " 1 st division" << "\n";
    }
    else if(percentage >= 50  && percentage <= 59 ){
        cout << "2 nd  division" << "\n";
    }
    else if(percentage >= 35 && percentage <50){
        cout << "3rd division" << "\n";
    }
    else{
        cout << "fail" << "\n";
    }
    return 0;
}