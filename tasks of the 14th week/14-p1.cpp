#include<iostream>
using  namespace  std;  
class  Shape                                                                      //基类Shape的定义
{  
public:  
        Shape(){}  
        ~Shape(){}  
        double  getArea()const;
};  
double  Shape::getArea()  const
{  
        return  0.0;
}  
//start
//Circle类、Rectangle类、Square类的定义
class Circle:public Shape
{
    public:
        Circle(double r=0):radius(r){}
        ~Circle(){}
        double  getArea() const{
            return 3.14159 * radius * radius;
        }
    private:
        double radius;
};
class Rectangle:public Shape
{
    public:
        Rectangle(int _a=0,int _b=0):a(_a),b(_b){}
        ~Rectangle(){}
        double  getArea() const{
            return a*b;
        }
    private:
        int a,b;
};
class Square:public Rectangle
{
    public:
        Square(int _a=0):Rectangle(_a,_a){}
        ~Square(){}
};
//end
int  main()  
{  
    //start
    //  创建Circle类对象，radius为3.5
    Circle circle(3.5);
    //  创建Rectangle类对象，两条边分别为5,10
    Rectangle rectangle(5,10);
    //  创建square类对象，边长为5
    Square square(5);
    //end
    cout<<"The  area  of  the  circle  is  "<<circle.getArea()<<endl;  
    cout<<"The  area  of  the  rectangle  is  "<<rectangle.getArea()<<endl;  
    cout<<"The  area  of  the  Square  is  "<<square.getArea()<<endl;
    return  0;
}