#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cmath>
#include<iomanip>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    int n,m,*point[1000]={NULL};
    cin>>n>>m;//输入个数和维度
    for(int i=0;i<n;i++)
    {
        point[i]=new int [m];
        for(int j=0;j<m;j++)
        {
            cin>>point[i][j];
        }
    }//输入个点信息

    int ans=0;//储存答案
    for(int dimentionality=0;dimentionality<m;dimentionality++)//每一维单独计算
    {
        int *temp=new int [m];//用一个临时数组来排序
        int local_ans=0;
        for(int pt=0;pt<n;pt++)
        {
            temp[pt]=point[pt][dimentionality];
        }
        sort(temp,temp+n);//排序
        for(int i=n-1;i>=n/2;i--)//两端向内依次求和
        {
            local_ans+=temp[i]-temp[n-1-i];
        }
        ans+=local_ans;
    }

    cout<<ans;
    return 0;
}