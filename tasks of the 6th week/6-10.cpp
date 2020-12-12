#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int edge[3];
    for(int i=0;i<=2;i++)
    cin>>edge[i];
    for(int i=0;i<=2;i++)
    {
        if(edge[i%3]+edge[(i+1)%3]<=edge[(i+2)%3])
        {
            cout<<"not a triangle";
            return 0;
        }
    }
    if(edge[0]==edge[1]||edge[1]==edge[2]||edge[2]==edge[0])
        cout<<"yes";
    else cout<<"no";

    return 0;
}