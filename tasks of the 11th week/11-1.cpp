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
    int n;
    cin>>n;
    double height=100;
    for(int i=1;i<=n;i++)
    {
        height/=2.0;
    }
    cout<<height;

    return 0;
}