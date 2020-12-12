#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int scors;
    cin>>scors;
    if(scors>=90) cout<<"A";
    else if(scors>=80) cout<<"B";
    else if(scors>=70) cout<<"C";
    else if(scors>=60) cout<<"D";
    else cout<<"E";
    return 0;
}