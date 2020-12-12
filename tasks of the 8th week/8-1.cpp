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
    string ch={"1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./'"};
    char c;
    while(cin>>c)
    {
        bool flag=0;
        switch(c)
        {
            case ' ':
            case '`':
            case 'Q':
            case 'A':
            case 'Z':cout<<c;flag=1;
        }
        if(flag)continue;
        int i=0; 
        for(i=0;ch[i]!=c;)
            i++;
        cout<<ch[i-1];
    }
    return 0;
}