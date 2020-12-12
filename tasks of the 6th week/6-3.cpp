#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    char a;
    cin>>a;
    switch (a)
    {
    case 'A':cout<<"85~100";break;
    case 'B':cout<<"70~84";break;
    case 'C':cout<<"60~69";break;
    case 'D':cout<<"0~60";break;
    default:
        cout<<"error";
        break;
    }
    return 0;
}