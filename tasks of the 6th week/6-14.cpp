#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<iomanip>
using namespace std;


int main()
{
    double salary,money;
    cin>>salary;
    money=salary;
    double tax=0;
    if(salary>6000){tax+=(salary-6000)*0.20;salary=6000;}
    if(salary>3000){tax+=(salary-3000)*0.15;salary=3000;}
    if(salary>2000){tax+=(salary-2000)*0.10;salary=2000;}
    if(salary>1000){tax+=(salary-1000)*0.05;salary=1000;}
    cout<<setprecision(2)<<fixed<<"tax="<<tax<<", money="<<money-tax;
    return 0;
}