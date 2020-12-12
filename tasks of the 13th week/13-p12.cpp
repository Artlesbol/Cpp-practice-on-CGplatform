#include<iostream>
using  namespace  std;
const  int  MAXLENGTH=10;  //此处定义一个常量MAXLENGTH为10

#include<algorithm>
class CSet {
    public:
        CSet(int a[],int size);//用数组a的前size个元素初始化集合
        CSet(const CSet &set);
        CSet();
        bool AddElem(int e);//添加元素，成功返回true，否则返回false
        CSet Intersection(CSet &set);//求两个集合的交集并返回
        void Print();
    private:
        int data[MAXLENGTH];//升序保存集合元素
        int size;//集合大小
};
bool ifinset(int x,const int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==x)return 1;
    }
    return 0;
}
CSet::CSet(int a[],int size)
{
    for(int i=0;i<size;i++)
        data[i]=a[i];
    this->size=size;
    sort(data,data+size-1);
}
CSet::CSet(const CSet &set)
{
    for(int i=0;i<set.size;i++)
        data[i]=set.data[i];
    size=set.size;
}
bool CSet::AddElem(int e)
{
    data[size]=e;
    size++;
    sort(data,data+size-1);
}
CSet::CSet()
{
    size=0;
}
CSet CSet::Intersection(CSet &set)
{
    CSet temp;
    for(int i=0;i<size;i++)
    {
        if(ifinset(data[i],set.data,set.size))
        {
            temp.AddElem(data[i]);
        }
    }
    return temp;
}


void  CSet::Print()
{
    int  i;
    for  (i=0;i<size;i++)
            cout  <<  data[i]  <<  "  ";
    cout  <<  endl;
}

int  main()
{
    int  a[8]={2,3,4,5,6,7,8,9};
    int  b[10]={1,3,4,6,8,9,11,14,16,18};
    int  x,y;
    cin  >>  x  >>  y;
    CSet  s1(a,x),s2(b,y);
    s1.Print();
    s2.Print();
    s1.AddElem(11);
    s1.Print();
    (s1.Intersection(s2)).Print();
    return  0;
}