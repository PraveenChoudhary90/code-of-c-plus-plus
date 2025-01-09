#include <iostream>
using namespace std;
class vehicle{
    public :virtual void sound()=0;
};
class train:public vehicle{
    public:void sound(){
        cout << "pooo pooo" << "\n";
    }
};
class car:public vehicle{
    public:void sound(){
        cout << "pip pipipipip" << "\n";
    }
};
class aroplance:public vehicle{
    public:void sound(){
        cout << "hawa hawa" << "\n";
    }
};
class bycicle:public vehicle{
    public:void sound(){
        cout << "tring tring" << "\n";
    }
};
int main(){
    vehicle *p;
    train t;
    car c;
    aroplance a;
    bycicle b;
    p = &t;
    p->sound();
}
