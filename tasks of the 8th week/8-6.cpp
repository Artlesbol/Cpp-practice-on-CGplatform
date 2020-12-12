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
    double sum=0;
    for(int i=1;i<=6;i++)
    {
        double a;
        cin>>a;
        sum+=a;
    }
    cout<<sum/6;
    return 0;
}