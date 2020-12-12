#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int f(int n)
{
    if(n==1)return 1;
    return n*f(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<n<<endl;
    cout<<n<<"!="<<f(n);
    return 0;
}