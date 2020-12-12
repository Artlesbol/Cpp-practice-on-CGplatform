#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int Oct_to_Dec(int n)
{
    int ans=0,cardinal=1;
    while(n)
    {
        ans+=cardinal*(n%10);
        cardinal*=8;
        n/=10;
        
    }
    return ans;
}

int main()
{
    int num;
    cin>>num;
    cout<<Oct_to_Dec(num);
    return 0;
}