#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int age;
    cin>>age;
    if(age<16)
    {
        cout<<"I am a child!";
    }
    else if (age>55)
    {
        cout<<"I am an old!";
    }
    else
    {
        cout<<"I am an adult!";
    }
    
    return 0;
}