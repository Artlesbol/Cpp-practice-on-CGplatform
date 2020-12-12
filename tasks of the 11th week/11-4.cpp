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
    const int SIZE=1000;
    int matrix[SIZE][SIZE];
    int n,m;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}