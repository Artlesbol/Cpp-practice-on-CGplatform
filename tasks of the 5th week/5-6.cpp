#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int head,feet;
    cin>>head>>feet;
    cout<<"rabbit="<<(feet-head*2)/2<<",chicken="<<head-(feet-head*2)/2;
    return 0;
}