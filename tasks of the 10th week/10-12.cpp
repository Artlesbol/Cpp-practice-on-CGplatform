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
    string str,str_son;
    cin>>str;
    for(unsigned int i=1;i<=str.size();i++)
    {
        str_son=str.substr(0,i);
        string::size_type idx=str.find(str_son,i);
        if(idx==string::npos)
        {
            cout<<str.size();
            break;
        }
        else if(idx==i)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}