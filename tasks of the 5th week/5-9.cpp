#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;


int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double d=b*b-4*a*c;
    if (d>=-0.000000001 && d<=0.000000001)
    {
        cout<<"has two equal roots:"<<endl;
        cout<<"x1=x2="<<-b/(2*a);
    }
    else if(d>0.000000001)
    {
        cout<<"has two real roots:"<<endl;
        cout<<"x1="<< ((-1)*b + sqrt(d))/(2*a)<<",";
        cout<<"x2="<< ((-1)*b - sqrt(d))/(2*a);
    }
    else
    {
        cout<<"has two complex roots:"<<endl;
        double jp = (-1)*b/(2*a);
        double ip = sqrt((-1)*d)/(2*a);
        cout<<"x1="<< jp <<"+"<< ip <<"i"<<endl;
        cout<<"x2="<< jp <<"-"<< ip <<"i";
    }
    
    
    return 0;
}