#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int month,year;
    cin>>year>>month;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<31;
        break;
    case 2:
        if((year%4==0 && year%100!=0) || (year%400==0))
            cout<<29;
        else 
            cout<<28;
        break;   
    default:
        cout<<30;
        break;
    }
    return 0;
}