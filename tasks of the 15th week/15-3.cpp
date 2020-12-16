#include<iostream>
#include<cstring>
using  namespace std;

class Animal
{
    public:
    virtual void Bark(){
        cout<<"..."<<endl;
    }
};

class Dog:public Animal
{
    public:
    void Bark(){
        cout<<"wang...wang..."<<endl;
    }
};
class Mouse:public Animal
{
    public:
    void Bark(){
        cout<<"zhi...zhi..."<<endl;
    }
};

int main()
{
    Animal *p=new Animal;
    p->Bark();
    delete p;
    p=new Mouse;
    p->Bark();
    delete p;
    p=new Dog;
    p->Bark();
    return 0;
}