#include  <iostream>
using  namespace  std;
class  Sales_status
{
public:
    Sales_status(int  sId,    int  pq,  float  pprice);  //销售情况的带参数的构造函数
    ~Sales_status();
    static  float  printsum();
    static  float  average();          
private:
    int  num;
    int  quantity;
    float  price;
    static  float  discount;
    static  int  n;            //定义静态成员数据商品销售总件数：n
    static  float  sum;        //定义静态成员数据商品销售总金额：sum
};
Sales_status::Sales_status(int sId,int  pq,float pprice)
{
    num=sId; quantity=pq; price=pprice;
    n+=pq;
    if(pq>10) discount=0.98;
    else discount=1;
    sum+=pq*price*discount;
}
//初始化静态成员数据
int Sales_status::n=0;
float Sales_status::sum=0;
float Sales_status::discount=1;


Sales_status::~Sales_status()
{

}
float  Sales_status::printsum()
{
    return  sum;
}
float  Sales_status::average()
{
    return  sum/n;
}
int  main()
{
        Sales_status  s1(101,5,23.5);
        Sales_status  s2(102,12,24.56);
        Sales_status  s3(103,100,21.5);
        cout<<"the  sum  is:"<<endl;
        //调用静态成员函数
        cout<<Sales_status::printsum()<<endl;
        cout  <<  endl<<"the  average  price  is:"<<endl;
        //调用静态成员函数
        cout<<Sales_status::average()<<endl;

        return  0;
}