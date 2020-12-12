#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int mileage;
    cin>>mileage;
    if(mileage<=3)cout<<14;
    else cout<<(mileage-3)*2+14;
    return 0;
}