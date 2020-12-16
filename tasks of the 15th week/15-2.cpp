#include<iostream>
#include<cstring>
using  namespace std;

//抽象类Shape
class Shape
{
    public:
        virtual double getArea()=0;
        virtual double getPerimeter()=0;
};

class Rectangle:public Shape
{
public:
    Rectangle(int w,int l):width(w),length(l){}
    virtual double getArea() final {
        return width*length;
    }
    virtual double getPerimeter() final{
        return 2*(length+width);
    }
    private:
        int width;
        int length;
};

class Circle:public Shape
{
public:
    Circle(int r):radius(r){}
    virtual double getArea() final {
        return 3.141592*radius*radius;
    }
    virtual double getPerimeter() final{
        return 2*3.141592*radius;
    }
private:
    int radius;
};

int main()
{   
    int a,b;
    cin>>a>>b;
    Shape *p=new Rectangle(a,b);
    cout<<p->getArea()<<endl;
    cout<<p->getPerimeter()<<endl;
    delete p;
    cin>>a;
    p=new Circle(a);
    cout<<p->getArea()<<endl;
    cout<<p->getPerimeter()<<endl;
    return 0;
}