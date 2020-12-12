#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int f(int x,int a[],int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans*=x;
        ans+=a[i];
    }
    return ans;
}

int main()
{
    int n,a[50],x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    cout<<f(x,a,n);
    return 0;
}