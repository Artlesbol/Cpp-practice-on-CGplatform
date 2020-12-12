#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int num;
    cin>>num;
    int a[5];
    for(int i=1;num%10;num/=10,i++)
        a[i]=(num%10+9)%10;
    cout<<a[2]*1000+a[1]*100+a[4]*10+a[3];

    return 0;
}