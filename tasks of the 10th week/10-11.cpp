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
    string str,maxstr="(max)";
    char max=-1;
    cin>>str;
    if(str.empty())return 0;
    for(unsigned int i=0;i<str.size();i++)
    {
        if(str[i]>max)
        {
            max=str[i];
        }
    }
    string::size_type idx=str.find(max);
    while(idx!=string::npos)
    {
        str.insert(idx+1,maxstr);
        idx=str.find(max,idx+1+5);//+5跳过刚刚插入的(max)
    }
    cout<<str;
    return 0;
}