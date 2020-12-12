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

void slove(string str,char* &s)
{
    s=new char [str.size()+1];
    s[str.size()]='\0';
    for(unsigned int i=0;i<str.size();i++)
    {
        s[str.size()-1-i]=str[i];
    }
}

int main()
{
    string str;
    getline(cin,str);
    char* s;
    slove(str,s);
    cout<<s;
    return 0;
}