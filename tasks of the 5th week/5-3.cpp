#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    const float Pi=3.14;
    double r,h,C,V;
    cin>>r>>h;
    C=r*Pi*r;
    V=C*h;
    cout<<V;

    return 0;
}