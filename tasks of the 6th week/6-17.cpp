#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;


int main()
{
    for(int number=2;number<=1000;number++)
    {
        int sum=0;
        for(int i=1;i<=sqrt(number);i++)
        {
            if(number%i==0)
            {
                sum+=i;
                sum+=number/i;
            }
        }
        if(sum-number==number)
        cout<<number<<" ";
    }
    return 0;
}