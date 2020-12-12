#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int f(int);

int main()
{
    int num;
    cin>>num;
    if(num<0) 
    {
        cout<<"illegal input";
        return 0;
    }
    cout<<f(num);
    return 0;
}

int f(int x)
{
    if(x<5)
    {
        return x;
    }
    else if(x>=15)
    {
        return x-6;
    }
    else
    {
        return x+6;
    }
}