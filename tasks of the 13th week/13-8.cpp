#include<iostream>
using namespace std;

class MyRectangele
{
    public:
    int getW();
    int getH();
    int Area();
    MyRectangele();
    MyRectangele(int xUp,int yUp,int xDown,int yDown);
    private:
    int xUp;
    int yUp;
    int xDown;
    int yDown;
};

int MyRectangele::getW(){return (xDown-xUp)>0?(xDown-xUp):(-(xDown-xUp));}
int MyRectangele::getH(){return (yDown-yUp)>0?(yDown-yUp):(-(yDown-yUp));}
int MyRectangele::Area(){return this->getW()*this->getH();}
MyRectangele::MyRectangele(){xUp=yUp=xDown=yDown=0;}
MyRectangele::MyRectangele(int xup,int yup,int xdown,int ydown):xUp(xup),yUp(yup),xDown(xdown),yDown(ydown){}

int main()
{   
    int c,d;
    cin>>c>>d;
    MyRectangele rectangele(0,0,c,d);
    cout<<"width="<<rectangele.getW()<<" height="<<rectangele.getH()<<" area="<<rectangele.Area();
    return 0;
}