#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    char * *str;
    int n;
    cin>>n;
    cin.get();
    str = new char* [n];
    for(int i=0;i<n;i++)
    {
        str[i]=new char ;
        gets(*(str+i));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(strcmp(str[j],str[j-1])<0)
            {
                char *temp=str[j];
                str[j]=str[j-1];
                str[j-1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        puts(str[i]);
    }
    return 0;
}