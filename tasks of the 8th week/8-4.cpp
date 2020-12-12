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
    bool flag=1;
    for(int i=1;i<=16;i++)
    {
        int a;
        cin>>a;
        if(i==5||i==9||i==10||i==13||i==14||i==15)
        {
            if(a!=0)
                flag=0;
        }
            
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}