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

class Rectangle
{
    public:
    Rectangle(int l,int w);
    ~Rectangle();
    int *length=NULL,*width=NULL;
    int area();
    private:
};

Rectangle::Rectangle(int l,int w)
{
    this->length=new int;
    this->width=new int;
    *this->length=l;
    *this->width=w;
}
Rectangle::~Rectangle()
{
    delete this->width;
    delete this->length;
}
int Rectangle::area()
{
    return (*this->length)*(*this->width);
}

int main()
{
    int a,b;
    cin>>a>>b;
    Rectangle R(a,b);
    cout<<R.area();
    return 0;
}