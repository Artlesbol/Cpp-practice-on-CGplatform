#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    float a[5]={0,12.5,20.5,10.4,17.5},buy_wight;
    int buy_note;
    cin>>buy_note>>buy_wight;
    if(buy_note<=4&&buy_note>=1)
    cout<<(buy_wight*a[buy_note]);
    else cout<<"none";

    return 0;
}