#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int a[7][7]=
    {
        {0,1,1,1,1,1,0},
        {1,0,0,0,0,0,1},
        {1,0,0,0,0,0,1},
        {0,1,1,1,1,1,0},
        {1,0,0,0,0,0,1},
        {1,0,0,0,0,0,1},
        {0,1,1,1,1,1,0},
    };
    for(int i=0;i<=6;i++)
    {
        for(int j=0;j<=6;j++)
        {
            if(a[i][j]==1) cout<<"#";
            else cout<<" ";
        }
        cout<<endl;
    }
        

    return 0;
}