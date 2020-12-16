#include<iostream>
#include<cstring>
using  namespace std;

class Animal
{
    public:
        virtual void what()=0;
};
class Cat:public Animal
{
    public:
        void what(){
            cout<<"Cat"<<endl;
        }
};
class Leopard:public Animal
{
    public:
        void what(){
            cout<<"Leopard"<<endl;
        }
};
int main()
{
    Animal *p;
    p=new Cat;
    p->what();
    delete p;
    p=new Leopard;
    p->what();
    return 0;
}