#include<iostream>
#include<string.h>
const  double  pi=3.14;  //定义常量pi
using  namespace  std;
class  circle
{
        //写成纯虚函数
    public:
    circle(double r):radius(r){}
    double radius;
    virtual double getarea()=0;
};
class  table
{        
    public:
    table(double h):height(h){}
    double height;
    virtual double getheight()=0;
};
class  roundtable:public  circle,public  table
{
    public:
    string color;
    double getheight(){
        return height;
    }
    double getarea()
    {
        return pi*radius*radius;
    }
    roundtable(double r,double h,string c):color(c),circle(r),table(h){}
};
int  main()
{
    double h,r;
    string c;
    cin>>r>>h>>c;
    roundtable rt(r,h,c);
    cout<<rt.getarea()<<endl<<rt.getheight()<<endl<<rt.color;
    return 0;
}