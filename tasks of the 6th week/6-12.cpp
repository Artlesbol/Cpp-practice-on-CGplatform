#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    double a,b,
           c,d;
    char op;
    cin>>a>>b;
    cin>>op;
    cin>>c>>d;
    if(op=='+')
    {
        cout<<(a+c)<<" + "<<(b+d)<<"i";
    }
    else if(op=='-')
    {
        cout<<(a-c)<<" + "<<(b-d)<<"i";
    }
    else if(op=='*')
    {
        cout<<(a*c-b*d)<<" + "<<(b*c+d*a)<<"i";
    }
    else if(op=='/')
    {
        if(c==0&&d==0)
        {
            cout<<"Divisor cannot be 0";
            return 0;
        }
        cout<<(a*c+b*d)/(c*c+d*d) <<" + "<<((b*c-a*d)/(c*c+d*d))<<"i";

    }
    else
    {
        cout<<"error";
    }
    return 0;
}