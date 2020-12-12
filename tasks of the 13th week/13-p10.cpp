#include<iostream>
#include"stdlib.h"
using  namespace  std;

class  IntStack  {
    public:
        IntStack(int  s);
        ~IntStack();
        void Push(int  data);
        void Pop(int  &data);
        void Print();
    private: 
        int *stack;
        int pos;
        int size;
};

IntStack::IntStack(int  s)
{
    stack=new int[s];
    pos=0;
    size=s;
}

IntStack::~IntStack()
{
    delete [] stack;        
}

void  IntStack::Push(int  data)
{
    if(pos==size){cout<<"full";exit(0);}
    stack[pos++]=data;
}

void  IntStack::Pop(int  &data)
{
    if(pos==0){cout<<"empty";exit(0);}
    data=stack[--pos];
}

void  IntStack::Print()
{
        int  i;
        for  (i=0;i<pos;i++)
                cout  <<  stack[i]  <<  "  ";
}

int  main()
{
        IntStack  is(5);
        int  a[10]  =  {2,5,1,7,5,4,2,7,3,6};
        int  i=0;
        int  d;
        int  x;
        cin  >>  x;
        while  (x!=-1)  {
                if  (x==0)  {
                        is.Push(a[i]);
                        i++;
                }
                else  is.Pop(d);
                cin  >>  x;
        }
        is.Print();
        return  0;
}