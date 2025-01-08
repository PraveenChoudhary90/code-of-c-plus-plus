#include <iostream>
using namespace std;
class alpha{
    public: alpha(){
        cout << "\n Memory create alpha" << "\n";
    }
~alpha(){
    cout << "memory delete apha" << "\n";
};
};
class beta{
    public: beta(){
        cout << "\n Memory create beta " << "\n";
    }
~beta(){
    cout << "memory delete beta" << "\n";
};
};
class gamma:public alpha,public beta{
    public: gamma(){
        cout << "\n Memory create gamma" << "\n";
    }
~gamma(){
    cout << "memory delete gamma" << "\n";
};
};
int main(){
    gamma g;
}