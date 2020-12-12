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
    const int d='a'-'A';
    string str;
    getline(cin,str);
    for(unsigned int i=0;i<str.length();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=d;
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=d;
        }
    }
    cout<<str;
    return 0;
}