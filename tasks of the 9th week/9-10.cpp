#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int calculate_approximate_sum(int x)
{
    int sum=1;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            sum+=i;
            sum+=x/i;
        }
    }
    return sum;
}

int main()
{
    int a,b;
    cin>>a>>b;
    if(calculate_approximate_sum(a)==b && a==calculate_approximate_sum(b))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}