#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

bool map(int *x,int num_x,int *y,int num_y)
{
    for(int i=0;i<num_x;i++)
    {
        bool flag=0;
        for(int j=0;j<num_y;j++)
        {
            if(x[i]==y[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int *a,*b;
    int num_a;
    cin>>num_a;
    a=new int [num_a];
    for(int i=0;i<num_a;i++)
    {
        cin>>a[i];
    }
    int num_b;
    cin>>num_b;
    b=new int [num_b];
    for(int i=0;i<num_b;i++)
    {
        cin>>b[i];
    }
    if(map(a,num_a,b,num_b)&&map(b,num_b,a,num_a))
        cout<<"yes";
    else
        cout<<"no";
    
    return 0;
}