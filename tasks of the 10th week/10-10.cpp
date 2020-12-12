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
    string sub="bd",str;
    cin>>str;
    string::size_type idx=str.find(sub);
    int cnt=0;
    while(idx!=string::npos)
    {
        cnt++;
        idx=str.find(sub,idx+3);
    }
    cout<<cnt;
    return 0;
}