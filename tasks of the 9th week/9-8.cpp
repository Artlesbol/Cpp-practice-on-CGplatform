#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int each_value_calculate(int value,int &salary)
{
    int quantity = salary/value;
    salary%=value;
    return quantity;
}

int picece_calculate(int salary)
{
    int sum=0,value[6]={100,50,10,5,2,1};
    for(int i=0;i<6;i++)
    {
        sum+=each_value_calculate(value[i],salary);
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int salary;
        cin>>salary;
        ans+=picece_calculate(salary);
    }
    cout<<ans;
    return 0;
}