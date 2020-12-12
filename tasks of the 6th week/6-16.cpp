#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int year,month,day,ans=0;
    cin>>year>>month>>day;
    if(month==2&&day==29)
        if((year%4==0&&year%100!=0)||year%400==0)
        {cout<<-1;return 0;}
    if(month>2)year++;//二月以后生日则考虑第二年是否为润
    for(int i=1;i<=18;i++,year++)
    {
        if((year%4==0&&year%100!=0)||year%400==0)
            ans+=366;
        else
            ans+=365;
    }
    cout<<ans;
    return 0;
}