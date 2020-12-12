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
    if(num/10000==num%10)
        if(num/1000%10==num/10%10)
        {
            cout<<"YES";
            return 0;
        }    
    cout<<"NO";
    return 0;
}