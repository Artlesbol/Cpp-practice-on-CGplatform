#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cmath>
#include<iomanip>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    for(int i=0;i<=4;i++)
    {
        cout<<"a"<<i<<"  "<<a<<endl;
        a=(b*a+c)%m;
    }
    return 0;
}