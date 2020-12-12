#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

char A='A',B='B',C='C';

void move(int num,char S,char E,char F)
{
    if(num==1)
    {
        cout<<S<<" to "<<E<<endl;
        return ;
    }
    move(num-1,S,F,E);
    cout<<S<<" to "<<E<<endl;
    move(num-1,F,E,S);
    return ;
}

int main()
{
    int n;
    cin>>n;
    move(n,'A','C','B');
    return 0;
}