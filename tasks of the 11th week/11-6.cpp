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
    cin>>str>>str_son;
    string::size_type idx=str.find(str_son);
    if(idx==string::npos)
    {
        cout<<"can't find";
    }
    else
    {
        cout<<"find at "<<idx+1;
    }
    return 0;
}