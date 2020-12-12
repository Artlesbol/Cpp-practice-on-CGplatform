#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;


// int main()
// {
//     unsigned int number;
//     bool flag=false;
//     cin>>number;
//     for(int i=31;i>=0;i--)
//     {
//         if((1<<i)&number)
//         {
            
//             if(flag)
//                 cout<<'1';
//             else
//             {
//                 flag=true;
//                 cout<<'1';
//             }
//         } 
//         else
//         {
//             if(flag)
//              cout<<'0';
//         }
//     }
//     return 0;
// }

void slove(int x)
{
    if(x==0)return;
    else
    {
        slove(x/2);
        cout<<x%2;
    }
}
int main()
{
    int n;
    cin>>n;
    slove(n);
    return 0;
}