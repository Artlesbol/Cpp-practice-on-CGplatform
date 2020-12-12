#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int a[6];
    for(int i=0;i<=5;i++)
        cin>>a[i];
    sort(a,a+6);
    cout<<a[5];
    return 0;
}