#include <iostream>
using namespace std;
class animal{
    public:virtual void sound()=0;//pure virtual function
};
class Cat:public animal
{
    public:void sound()
    {
        cout << "\n Meow Meow" << "\n";
    }
};
class Dog:public animal
{
    public:void sound()
    {
        cout << "\n Barking" << "\n";
    }
};
class Lion:public animal
{
    public:void sound()
    {
        cout << "\n Roaring" << "\n";
    }
};
int main(){
    animal *p;
    Cat c;
    Dog d;
    Lion l;
    p=&l;
    p->sound();
}