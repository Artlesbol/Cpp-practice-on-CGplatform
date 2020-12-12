#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int x,y,num;
    cin>>num;
    x=num%10;
    y=num/10;
    cout<<(x*10+y);
    return 0;
}