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
    string str,form="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    getline(cin,str);
    char d='A'-'a';//获取一个大小写ASCII码差值
    int ans[26]={0};
    for(int i=0;i<26;i++)
    {
        string::size_type idx=str.find(form[i]);
        int cnt=0;
        while(idx!=string::npos)
        {
            cnt++;
            idx=str.find(form[i],idx+1);
        }
        idx=str.find(form[i]-d);
        while(idx!=string::npos)
        {
            cnt++;
            idx=str.find(form[i]-d,idx+1);
        }
        ans[i]=cnt;
    }
    for(int i=0;i<26;i++)
    {
        cout<<form[i]<<":"<<ans[i]<<",";
        if((i+1)%10==0)
        {
            cout<<endl;
            continue;
        }
    }
    return 0;
}