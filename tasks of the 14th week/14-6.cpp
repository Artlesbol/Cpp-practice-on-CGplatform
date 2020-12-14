#include<iostream>
#include<cstring>
#include<iomanip>
using  namespace std;

class Circle
{
    public:
        Circle(int r=0):radius(r){}
        double getarea(){return 3.1415926*radius*radius;}
    private:
        int radius;

};
class Table
{
    public:
        Table(int h=0):height(h){}
        int gethight(){return height;}
    private:
        int height;
};
class RoundTable:public Circle,public Table
{
    public:
        RoundTable(int r,int h,string c):color(c),Table(h),Circle(r){}
        string getcolor(){return color;}
    private:
        string color;
};

int main()
{
    int r,h;
    string c;
    cin>>r>>h>>c;
    RoundTable RT(r,h,c);
    cout<<setprecision(6)<<RT.getarea()<<endl<<RT.gethight()<<endl<<RT.getcolor();
    return 0;
}