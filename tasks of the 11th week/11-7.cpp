#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    char str[1024];
    cin.getline(str,1024);
    char* pch;
    int cnt[3]={0};
    char *color[3]={"Red","White","Blue"};
    pch=strtok(str," \n");
    while(pch!=NULL)
    {
        if(pch[0]=='R') cnt[0]++;
        else if(pch[0]=='W') cnt[1]++;
        else cnt[2]++;
        pch=strtok(NULL," \n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=1;j<=cnt[i];j++)
        {
            cout<<color[i]<<" ";
        }
    }
    return 0;
}