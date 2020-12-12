#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;


int main()
{
    int n,k;
    bool bulb[1001]={0};
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j*i<=n;j++)
        {
            if(bulb[j*i]==0)bulb[j*i]=1;
            else bulb[j*i]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(bulb[i])cout<<i<<" ";
    }
    return 0;
}