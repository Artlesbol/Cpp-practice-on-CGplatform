#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    char a;
    cin>>a;
    if((a>='a' && a<='z') || (a>='A' && a<='Z'))
    cout<<"char";
    else if(a>='0'&&a<='9')
    {
        cout<<"digit";
    }
    else
    {
        cout<<"other";        
    }
    
    
    return 0;
}