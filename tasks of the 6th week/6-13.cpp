#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int m,ans=0;
    cin>>m;
    for(int i=0;i<=m;i++)
    {
        for(int j=i+1;j<=m;j++)
        {
            for(int k=j+1;k<=m;k++)
            {
                if(i!=0)
                {
                    if((i*100+j*10+k)%2==0)ans++;
                    if((i*100+k*10+j)%2==0)ans++;
                }
                if((j*100+i*10+k)%2==0)ans++;
                if((j*100+k*10+i)%2==0)ans++;
                if((k*100+i*10+j)%2==0)ans++;
                if((k*100+j*10+i)%2==0)ans++;
                
            }
        }
    }
    cout<<ans;
    return 0;
}