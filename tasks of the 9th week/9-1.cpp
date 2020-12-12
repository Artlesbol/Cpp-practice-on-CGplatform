#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

bool check(const int a,const int b)
{
    if(b%a==0)return 1;
    else return 0;
}

int main()
{
    int number[3],n;
    cin>>n;
    for(int i=0;i<3;i++)
        cin>>number[i];
    int ans=0;
    while(++ans)
    {
        bool flag=1;
        for(int i=0;i<=2;i++)
        {
            if(!check(number[i],ans))
            {
                flag=0; 
                break;
            }
        }
        if(flag)
        {
            cout<<ans;
            break;
        }
    }
    return 0;
}