#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int cal_step(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n%2==0)
    {
        n=n/2;
        cout<<n<<" ";
        return 1+cal_step(n);
    }
    else
    {
        n=3*n+1;
        cout<<n<<" ";
        return 1+cal_step(n);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<endl<<cal_step(n);
    return 0;
}