#include<iostream>
using namespace std;
class Point    	//基类Point类的定义
{
public:         //公有函数成员
    void InitP(float xx=0, float yy=0) {  X=xx;Y=yy;   }
    void Move(float xOff, float yOff)  {  X+=xOff;Y+=yOff; }
    float GetX() {  return X;  }
    float GetY() {  return Y;  }
protected:	        	//私有数据成员
    float X,Y;
};
class Rectangle: public Point	//派生类声明部分
{
public:	        	//新增公有函数成员
    void InitR(float x, float y, float w, float h)
	{  
	X=x; 
	Y=y; 	//访问基类私有数据成员
	W=w;
	H=h;
	}	
    float GetH() {return H;}
    float GetW() {return W;}
private:	         	//新增私有数据成员
    float W,H;
};
int main()
{
	Rectangle   rect;
	rect.InitR(1,2,3,4);
	cout<<rect.GetX()<<endl; 
	cout<<rect.GetY()<<endl;
    return 0;
}