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
    string::size_type pos=str.find('s');
    if(pos!=string::npos)
        cout<<str.find('s');
    else
        cout<<-1;
    return 0;
}