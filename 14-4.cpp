#include<iostream>
#include<cstring>
using  namespace std;

#define Pi (3.14)

class Shape
{
    public:
        Shape(double _area):area(_area){}
        Shape():area(0){}
        double get_area(){return area;}
    private:
        double area;
};
class Circle : public Shape
{
    private:
        int r;
    public:
        Circle(int _r):r(_r),Shape(Pi*_r*_r){}
        Circle():r(0){}
    
};
class Rectangle:public Shape
{
    public:
        Rectangle(int l,int w):weight(w),length(l),Shape(l*w){}
        Rectangle():length(0),weight(0){}
    private:
        int length;
        int weight;
};
class Squre:public Rectangle
{
    public:
        Squre(int _a):a(_a),Rectangle(_a,_a){}
        Squre():a(0){}
    private:
        int a;
};

ostream & operator << (ostream & out,Shape & a)
{
    out<<a.get_area();
    return out;
}

int main()
{
    int r,l,w,a;
    cin>>r>>l>>w>>a;
    Circle C(r);
    Rectangle R(l,w);
    Squre A(a);
    cout<<C<<endl<<R<<endl<<A;

    return 0;
}