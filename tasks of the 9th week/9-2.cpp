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
    int subscript[8],head=-1;
    int max=-1;

    for(int i=0;i<8;i++)
    {
        int a;
        cin>>a;
        if(a==max)
        {
            subscript[++head]=i;
        }
        else if(a>max)
        {
            max=a;
            head=-1;
            subscript[++head]=i;
        }
    }

    cout<<max<<endl;
    for(int i=0;i<=head;i++)
        cout<<subscript[i]<<" ";

    return 0;
}