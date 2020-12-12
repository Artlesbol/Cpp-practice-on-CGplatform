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
    int *p=NULL;
    int n;
    cin>>n;
    p=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=p[i];
    }
    double average=(double)sum/n;
    cout<<average;

    return 0;
}