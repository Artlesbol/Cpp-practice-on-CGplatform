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
    int matrix[11][11]={0};
    int n;
    cin>>n;
    int x=n,y=0,cnt=0;
    while(cnt<n*n)
    {
        while(y+1<=n&&!matrix[x][y+1])
        {
            matrix[x][++y]=++cnt;
        }
        while(x-1>=1&&!matrix[x-1][y])
        {
            matrix[--x][y]=++cnt;
        }
        while(y-1>=1&&!matrix[x][y-1])
        {
            matrix[x][--y]=++cnt;
        }
        while(x+1<=n&&!matrix[x+1][y])
        {
            matrix[++x][y]=++cnt;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<matrix[j][i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}