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
    long long int n;
    cin>>n;
    while(n)
    {
        cout<<n%10;
        n/=10;
    }
    return 0;
}