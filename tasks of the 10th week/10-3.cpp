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
    string str;
    cin>>str;
    string::size_type idx=str.find('T');
    while(idx!=string::npos)
    {
        str.erase(idx,1);
        idx=str.find('T');
    }
    cout<<str;
    return 0;
}