#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int x,y,x1,x2,x3;
    cin>>x;
    x1=x%10; y=x/10;
    x2=y%10;
    x3=y/10;
    long long int sum=x1*x1*x1+x2*x2*x2+x3*x3*x3;
    if(sum==x)cout<<"yes";
    else cout<<"no";
    
    return 0;
}