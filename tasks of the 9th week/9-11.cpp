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
    bool monkey[1000]={0};
    int m,n,num,p=0;
    cin>>m>>n;
    num=m;
    int count=1;
    while (num!=1)
    {
        if(count==n)
        {
            count=1;
            monkey[p]=1;
            num--;
        }
        if(monkey[p]==1)
        {
            p=(p+1)%m;
            continue;
        }
        p=(p+1)%m;
        count++;
    }
    for(int i=0;i<1000;i++)
    {
        if(monkey[i]==0)
        {
            cout<<"input m: input n: king: "<<i+1;
            break;
        }
    }
    return 0;
}