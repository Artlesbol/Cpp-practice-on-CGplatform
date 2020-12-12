#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int a,b,ans;
    cin>>a>>b>>ans;
    if(a*b==ans)
    cout<<"right";
    else
    {
        cout<<"error";
    }
    
    return 0;
}