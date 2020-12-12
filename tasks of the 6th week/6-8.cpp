#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    double hight,wight,standard;
    cin>>wight>>hight;
    standard=hight-110;
    double dif;
    dif=wight-standard;
    if(dif>=5)cout<<"fat";
    else if(dif<=-5)cout<<"thin";
    else cout<<"good";

    return 0;
}
