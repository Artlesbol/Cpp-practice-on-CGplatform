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
    getline(cin,str);
    int len=str.length();
    for(int i=1;i<len;i++)
    {
        if(str[i]==str[i-1])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}