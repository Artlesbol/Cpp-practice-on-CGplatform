#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int a[4];
    for(int i=0;i<=3;i++)
        cin>>a[i];
    sort(a,a+4);
    for(int i=3;i>=0;i--)
        cout<<a[i]<<" ";
    return 0;
}