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
    int a[9];
    for(int i=1;i<=8;i++)
    {
        cin>>a[i];
    }
    int target;
    bool not_found_note=1;
    cin>>target;
    for(int i=1;i<=8;i++)
    {
        if(target==a[i])
        {
            cout<<i;
            not_found_note=0;
            break;
        }
    }
    if(not_found_note)
    {
        cout<<"cannot find";
    }
    return 0;
}