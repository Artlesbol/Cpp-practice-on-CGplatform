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
    int bucket[100]={0};
    for(int i=1;i<=10;i++)
    {
        int temp;
        cin>>temp;
        bucket[temp]++;
    }
    for(int i=0;i<100;i++)
    {
        if(bucket[i])
        {
            for(int j=1;j<=bucket[i];j++)
            {
                cout<<i<<" ";
            }
        }
    }
    return 0;
}