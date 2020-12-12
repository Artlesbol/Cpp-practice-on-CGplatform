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
    string str1,str2,son_str;
    cin>>str1>>str2>>son_str;
    if(str1.find(son_str)!=string::npos&&str2.find(son_str)!=string::npos)
        cout<<"yes";
    else 
        cout<<"no";
    return 0;
}