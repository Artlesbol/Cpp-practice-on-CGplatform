#include<iostream>
#include"stdlib.h"
using  namespace  std;

const  int  length=41;

class HugeInteger
{
    public:
        HugeInteger add(const HugeInteger & a);
        void input(const char * ic);
        HugeInteger();
        HugeInteger(const char * ic);
        HugeInteger(int ans[],bool flag,int size);
        ~HugeInteger();
        void output();
    private:
        int integer[40]={0};
        bool outrage=0;
        int size=0;
};
HugeInteger HugeInteger::add (const HugeInteger & a)
{
    int ans[40]={0},temp_size=0;
    for(int i=0;i<40;i++)
    {
        ans[i]+=(integer[i]+a.integer[i]);
        if(i==39)
        {
            if(ans[39]>=10)
            {
                outrage=1;
                break;
            }
        }
        else{
            ans[i+1]+=ans[i]/10;
        }
        if(ans[i]!=0) temp_size=i;        
        ans[i]%=10;
    }
    return HugeInteger(ans,outrage,temp_size);
}

HugeInteger::HugeInteger()
{

}
HugeInteger::HugeInteger(int ans[],bool flag,int isize)
{
    outrage=flag;
    size=isize;
    for(int i=0;i<=size;i++)
    {
        integer[i]=ans[i];
    }
}
void HugeInteger::input(const char * ic)
{
    for(size=0;ic[size]!='\0';size++);
    for(int i=0;i<size;i++)
        integer[i]=ic[size-i-1]-'0';
    for(int i=size;i<40;i++)
        integer[i]=0;
}
HugeInteger::HugeInteger(const char * ic)
{
    for(size=0;ic[size]!='\0';size++);
    for(int i=0;i<size;i++)
        integer[i]=ic[size-i-1]-'0';
    for(int i=size;i<40;i++)
        integer[i]=0;
}
HugeInteger::~HugeInteger()
{
    
}
void HugeInteger::output()
{
    if(outrage)
    {
        cout<<"outrange"<<endl;
        return;
    }
    for(int i=size;i>=0;i--)
        cout<<integer[i];
    cout<<endl;
}

int  main()
{
        HugeInteger hi1;
        char *c =new char[length];
        cin  >>  c;
        char *d =new char[length];
        cin  >>  d;
        hi1.input(c);
        HugeInteger hi2(d);
        (hi1.add(hi2)).output();
        return  0;
}