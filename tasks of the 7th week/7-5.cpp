#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;


int main()
{
    int num;
    cin>>num;
    while(num)
    {
        cout<<num%10;
        num/=10;
    }
    return 0;
}