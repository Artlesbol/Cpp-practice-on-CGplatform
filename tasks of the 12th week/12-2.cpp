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

class Point
{
    public:
        Point(int xx=0, int yy=0)  {X=xx;Y=yy;} //构造函数
        Point(Point &p); //复制构造函数
        int GetX() {return X;}
        int GetY() {return Y;}
    private:
        int X,Y;
    };

Point::Point(Point &p)
{
    X=p.X;
    Y=p.Y;
}

void fun1(Point p)
{
    cout<<p.GetX()<<endl;
}

Point fun2()
{
    Point A(1,2);
    return A;
}

int main()
{
    Point A(4,5);
    Point B(A);
    cout<<B.GetX()<<endl;
    fun1(B);
    B=fun2();
    cout<<B.GetX();
    return 0;
}