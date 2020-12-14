#include<iostream>
#include<cstring>
using  namespace std;

class Point
{
    public:
        void print(){
            cout<<"This is Point";
        }
};
class Point3d:public Point
{
    public:
        void print(){
            cout<<"This is 3D Point";
        }    
};

int main()
{
    Point3d p;
    p.Point::print();
    cout<<endl;
    p.Point3d::print();
    return 0;
}