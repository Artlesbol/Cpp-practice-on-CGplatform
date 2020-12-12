#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int sum=0;
    for(int i=1;i<=99;i+=2)
        sum+=i;
    cout<<"sum="<<sum;
    return 0;
}