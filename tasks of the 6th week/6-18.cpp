#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;



int main()
{
    int final_get=1,sum=0,i=1;
    while(i<=5)
    {
        sum=final_get*4;
        for(i=1;i<=5;i++)
        {
            if(sum%4==0)
                sum=(sum/4)*5+1;
            else
            {
                final_get++;
                i=1;
                break;
            }
        }
    }
    cout<<sum;
    return 0;
}