#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int f(int m,int n)
{
    if(n==0)return 0;
    if(m==0)return 0;
    if(n==1 && n==1)return 1;
    return f(m-1,n)+f(m,n-1);
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<f(m,n);
    return 0;
}