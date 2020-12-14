#include<iostream>
using  namespace  std;
class  vehicle  //定义汽车类
{
private:
    int  wh;  //车轮数
    float  we;  //重量
public:
    vehicle(int h,float e):wh(h),we(e){}
    void print()
    {
        cout<<"车轮数为："<<wh<<"个"<<endl
            <<"车重为："<<we<<"吨"<<endl;
    }
};
class  car:public  vehicle  //公有派生小车类
{
    int  pa;
public:
    car(int h,float e,int p):pa(p),vehicle(h,e){}
    void print()
    {
        cout<<"小车："<<endl;
        vehicle::print();
        cout<<"载人数为："<<pa<<"个"<<endl;
    }
};
class  truck:public  vehicle  //公有派生卡车类
{
    int  pa;
    float  pay;
public:
    truck(int h,float e,int pas,float pa):pa(pas),pay(pa),vehicle(h,e){}
    void print()
    {
        cout<<"卡车："<<endl;
        vehicle::print();
        cout<<"载人数为："<<pa<<"个"<<endl;
        cout<<"载重为："<<pay<<"吨"<<endl;
    }
};

int  main()
{
        int  vWH;
        float  vWE;
        cin  >>  vWH  >>  vWE;
        vehicle  ve1(vWH,vWE);
        ve1.print();
        int  cPA;
        cin  >>  vWH  >>  vWE  >>  cPA;
        car  car1(vWH,vWE,cPA);
        car1.print();
        double  tPay;
        cin  >>  vWH  >>  vWE  >>  cPA  >>  tPay;
        truck  tr1(vWH,vWE,cPA,tPay);
        tr1.print();
        return  0;
}
