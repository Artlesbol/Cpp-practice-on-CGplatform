#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

bool check(int year)
{
    if(year%4==0&&year%100!=0)
    {
        return true;
    }
    else if(year%400==0)
    {
        return true;;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int year,n;
    cin>>year>>n;
    while(1)
    {
        if(check(year))
        {
            n--;
            if(n==0)
            {
                cout<<year;
                break;
            }
        }
        year++;
    }
    return 0;
}