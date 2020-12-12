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
    int num[50],head=-1;
    while(cin>>num[++head])
    {
        if(num[head]==-1)break;
    }
    if(head<4)
    {
        cout<<"invalid input";
        return 0;
    }
    int max=-1,suscriput;
    for(int i=0;i<=head;i++)
    {
        if(num[i]+num[(i+1)%head]+num[(i+2)%head]+num[(i+3)%head]>max)
        {
            suscriput=i;
            max=num[i]+num[(i+1)%head]+num[(i+2)%head]+num[(i+3)%head];
        }
    }
    cout<<suscriput+1<<" "<<max;
    return 0;
}