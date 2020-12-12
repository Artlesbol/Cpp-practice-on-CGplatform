#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

bool prime_flag[501]={0};
int prime[100],k=0;

void get_prime()
{
    for(int i=2;i<=500;i++)
    {
        if(!prime_flag[i]) prime[++k]=i;
        for(int j=1;j<=k&&i*prime[j]<=500;j++)
        {
            prime_flag[i*prime[j]]=1;
            if(i%prime[j]==0)break;
        }
    }
    return;
}
//欧拉筛法线性素数筛

int main()
{
    get_prime();
    int n;
    cin>>n;
    for(int i=1;i<=k,prime[i]<=n-prime[i];i++)
    {
        if(prime_flag[n-prime[i]]==0)
        {
            cout<<n-prime[i]<<" + "<<prime[i]<<" ="<<n<<endl;
        }
    }

    return 0;
}