#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cmath>
#include<iomanip>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

class Dog
{
    public:
        Dog(string,string,int);
        void set_name(string);
        void set_color(string);
        void set_age(int);
        void print_information();
    private:
        string name;
        string color;
        int age;
};
Dog::Dog(string _name,string _color,int _age)
{
    this->age=_age;
    this->color=_color;
    this->name=_name;
}
void Dog::set_age(int _age)
{
    this->age=_age;
}
void Dog::set_color(string _color)
{
    this->color=_color;
}
void Dog::set_name(string _name)
{
    this->name=_name;
}
void Dog::print_information()
{
    cout<<"name="<<this->name<<",color="<<this->color<<",age="<<this->age<<endl;
}
int main()
{
    Dog _1 ("dog1","white",1);
    Dog _2 ("peter","black",3);
    _1.print_information();
    _2.print_information();
    return 0;
}