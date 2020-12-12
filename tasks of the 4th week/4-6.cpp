#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int time1,time2;
    cin>>time1>>time2;
    int time1_h,time1_m,time2_h,time2_m;
    time1_m=time1%100;
    time1_h=time1/100;
    time1=time1_h*60+time1_m;
    time2_m=time2%100;
    time2_h=time2/100;
    time2=time2_h*60+time2_m;
    int time_sub=time2-time1;
    cout<<(time_sub/60)<<" hrs "<<(time_sub%60)<<" mins"<<endl;

    return 0;
}