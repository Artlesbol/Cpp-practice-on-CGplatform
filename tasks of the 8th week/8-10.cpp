#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int get_min(int num[],int cnt)
{
    int ans=0;
    for(int i=1;i<=cnt;i++)
        ans=ans*10+num[i];
    return ans;
}
int get_max(int num[],int cnt)
{
    int ans=0;
    for(int i=cnt;i>=1;i--)
        ans=ans*10+num[i];
    return ans;
}
void pretreat(int n,int num[],int &cnt)
{
    while(n)
    {
        num[++cnt]=n%10;
        n/=10;
    }
}
bool check(int n,int out[],int count)
{
    for(int i=1;i<=count-1;i++)
    {
        if(n==out[i])
            return 1;
    }
    return 0;
}

int main()
{
    int n=0,count=0,out[1001];
    cin>>n;
    if(n==0)return 0;
    while(count<1000)//至多产生1000个整数
    {
        cout<<n<<" ";
        int num[10000],cnt=0;
        pretreat(n,num,cnt);//将待处理数n各个数位分解到num数组中
        sort(num+1,num+cnt+1);//对num数组进行排序
        n=get_max(num,cnt)-get_min(num,cnt);//分别从大到小和从小到大组合后相减
        out[++count]=n;//记录到用于输出的数组中
        if(check(n,out,count))//检查是否开始重复
        {
            cout<<n;//若重复则输出结果，然后结束程序
            break;
        }
    }
    
    return 0;
}