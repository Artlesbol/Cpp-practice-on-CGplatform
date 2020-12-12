#include <iostream>              //  包含头文件iostream
using namespace std;            //  使用命名空间std
class Circle
{
    public:
        //start
        //成员函数
        Circle(int,int,int);
        float getArea();
        int getQuadrant();
        //end
    private:
        int  x;
        int  y;
        int  r;
};
Circle::Circle(int  pX,int  pY,int  pR)
{
    //start
    //构造函数完成对成员数据的赋值
    x=pX;
    y=pY;
    r=pR;
    //end
}
float Circle::getArea()
{
    //start
    //计算圆面积
    return (3.14)*r*r;
    //end
}
int Circle::getQuadrant()
{
    //start
    //判断圆心在那个象限
    if(x>0&&y>0)return 1;
    if(x>0&&y<0)return 4;
    if(x<0&&y>0)return 2;
    if(x<0&&y<0)return 3;
    //end
}
int main()
{
    Circle  c1(20,30,5);
    Circle  c2(-20,40,30);
    cout<<"The  area  of  the  first  circle:"<<c1.getArea()<<endl;
    cout<<"The  quadrant  of  the  first  circle:"<<c1.getQuadrant()<<endl;
    cout<<"The  area  of  the  second  circle:"<<c2.getArea()<<endl;
    cout<<"The  quadrant  of  the  second  circle:"<<c2.getQuadrant()<<endl;
    return  0;
}