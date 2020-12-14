#include<iostream>
#include<cstring>
using  namespace std;

class Point
{
    public:
        int getX(){return x;}
        int getY(){return y;}
        Point(int _x,int _y){x=_x;y=_y;}
        Point(){x=0;y=0;}
        void move(int c_x,int c_y)
        {
            x+=c_x;
            y+=c_y;
        }
    private:
        int x;
        int y;
};
class Rectangle: public Point
{
    public:
        Rectangle(int x,int y,int w,int l):Point(x,y)
        {
            weight=w;
            length=l;
        }
        int getweight(){return weight;}
        int getlength(){return length;}
        friend ostream & operator << (ostream & out,Rectangle & a);
        
    private:
        int weight;
        int length;
        
};
ostream & operator << (ostream & out,Rectangle & a)
{
    out<<a.getX()<<" "<<a.getY()<<" "<<a.length<<" "<<a.weight;
    return out;
}

int main()
{
    int x,y,w,l;
    cin>>x>>y>>l>>w;
    Rectangle R(x,y,w,l);
    cin>>x>>y;
    R.move(x,y);
    cout<<R;
    return 0;
}