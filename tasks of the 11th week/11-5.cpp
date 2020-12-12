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

inline int max(int a,int b)
{
    return a>b?a:b;
}

int find_max(int strat,int end,int a[])
{
    if(strat==end)return a[strat];
    int mid=(strat+end)/2;
    return max(find_max(strat,mid,a),find_max(mid+1,end,a));
}

int main()
{
    int n;
    cin>>n;
    int *num=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    cout<<find_max(0,n-1,num);
    return 0;
}