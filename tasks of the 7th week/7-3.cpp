#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int f(int x)
{
    if(x==1)return 0;
    else if(x==2)return 1;
    else return (f(x-1)+f(x-2));
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}