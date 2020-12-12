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
    if(x==1) return 1;
    return x*x*x+f(x-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}