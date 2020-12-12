#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cmath>
#include<iomanip>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

bool binary_search(int start,int end,int num[],int destination)
{
    if(start==end)
    {
        if(num[start]==destination)
            return 1;
        else
            return 0;
    }
    return binary_search(start,(start+end)/2,num,destination)||binary_search((start+end)/2+1,end,num,destination);
}

int main()
{
    int a[]={ 1, 3, 5, 7, 9, 11, 13, 15,17, 19 };
    int k;
    cin>>k;
    if(binary_search(0,9,a,k))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}