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
    string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ",str;
    getline(cin,str);
    for(unsigned int i=0;i<str.size();i++)
    {
        char d=0;
        if(str[i]>='a'&&str[i]<='z')//若为小写字母则修正
        {
            d='A'-'a';//小写字母修正值为d
        }
        string::size_type idx=alphabet.find(str[i]+d);//寻找转换后的字符
        if(idx==string::npos)
        {
            cout<<str[i];
            continue;
        }
        else 
        {
            cout<<(char)(alphabet[(idx+3)%26]-d);//输出时用修正值d复原字符
        }
    }
    return 0;
}