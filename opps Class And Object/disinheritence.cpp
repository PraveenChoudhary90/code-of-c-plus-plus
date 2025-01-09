#include <iostream>
using namespace std;
class Company{
    public:virtual void eminfo() final
    {
        cout << "\n Tota employee 100000" << "\n";
    };
};
// class BhopalBranch:public Company{
// //     // public:void eminfo()
// //     {
// //         cout << "\n total employee 1000" << "\n";
// //     }
// // };
int main(){
    // BhopalBranch b;
    Company b;
    b.eminfo();
}