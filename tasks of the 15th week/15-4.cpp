#include<iostream>
#include<cstring>
using  namespace std;

class my_base
{
    int a,b;
public:
    my_base(int x,int y)
    {
        a=x;
        b=y;
    }
    virtual void show()   //定义虚函数show()
    {
        cout<<a<<" "<<b<<endl;
    }
};
class my_class:public my_base
{
    int a;
public:
    my_class(int _a,int x,int y):my_base(x,y)
    {
        a=_a;
    }
    virtual void show()
    {
        cout<<a<<endl;
    }
};
int main()
{
    int a,x,y;
    cin>>x>>y>>a;
    my_base *p=new my_class(a,x,y);
    p->my_base::show();
    p->show();
    return 0;
}