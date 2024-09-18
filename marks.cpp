#include <iostream>
using namespace std;
int main(){

    int choice = 0;
    int dish = 0;
    float total_bill = 0;
    cout << "Enter the choice to take order" << "\n";
    cin >> choice;
    if(choice == 1){
        cout << "Enter the dish" << "\n";
        cin >> dish;
        total_bill = total_bill + 100;
        cout << total_bill <<"\n";
        
    }
    else if(choice == 2){
        cout << "Enter the dish" << "\n";
        cin >> dish;
        total_bill = total_bill + 150;
        cout << total_bill <<"\n";
        
    }
    else if(choice == 3){
        cout << "Enter the dish" << "\n";
        cin >> dish;
        total_bill = total_bill + 50;
        cout << total_bill <<"\n";
        
    }
    else{
        cout << "invalid choice" << "\n";
    }
    return 0 ;



}