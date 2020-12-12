#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int num;
    cin>>num;
    if(num%100000!=num)
    {
        cout<<"a bad number"<<endl;
        return 0;
    }
    int digit=10000;
    while(!(num/digit))
        digit/=10;
    while(digit)
    {
        cout<<digit<<":"<<num/digit%10<<" ";
        digit/=10;
    }
    return 0;
}