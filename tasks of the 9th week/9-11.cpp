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
    bool monkey[1000]={0};//标记猴子是否被淘汰
    int m,n,num,p=0;//num为猴子总数的拷贝用于记录剩余猴子，p为循环标记为指向的当前猴子
    cin>>m>>n;
    num=m;
    int count=1;//计数器 count不断增加 每数到n时淘汰当前的猴子
    while (num!=1)
    {
        if(count==n)
        {
            count=1;
            monkey[p]=1;//淘汰猴子p
            num--;
        }
        if(monkey[p]==1)
        {
            p=(p+1)%m;//遇到已淘汰的猴子则跳过
            continue;
        }
        p=(p+1)%m;
        count++;//遇到没淘汰则计数器计数+1
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
