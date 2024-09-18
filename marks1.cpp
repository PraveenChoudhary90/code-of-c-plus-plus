#include <iostream>
using namespace std;
int main(){
    int marks = 0;
    cout << "Enter the markes" << "\n";
    cin >> marks;
    if(marks >= 90 && marks <=100){
        cout << "A grade" << "\n";
    }
    else if(marks >= 80 && marks <=90){
        cout << "b grade" << "\n";
    }
    else if(marks >= 70 && marks <= 80){
        cout << "c grade" << "\n";
    }
    else{
        cout << "not eligibal" << "\n";
    }
    return 0;
    
    
}