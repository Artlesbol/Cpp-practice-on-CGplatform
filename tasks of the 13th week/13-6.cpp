#include<iostream>
using namespace std;

class Dog
{
    public:
    int getage();
    void setage(int);
    int getweight();
    void setweight(int);
    Dog(string,int,int);
    private:
    int age;
    int weight;
    string name;
};
Dog::Dog(string t_name,int t_age,int t_weight)
{
    name=t_name;
    age=t_age;
    weight=t_weight;
}
int Dog::getage()
{
    return age;
}
int Dog::getweight()
{
    return weight;
}
void Dog::setage(int t_age)
{
    age=t_age;
}
void Dog::setweight(int t_weight)
{
    weight=t_weight;
}
int main()
{
    Dog dog("jack",2,10);
    cout<<dog.getage()<<" "<<dog.getweight()<<endl;
    dog.setage(30);
    dog.setweight(10);
    cout<<dog.getage()<<" "<<dog.getweight();
    return 0;
}