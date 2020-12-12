#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    
    for(int a=123;a<=329;a++)
    {
        int b=a*2;
        int c=a*3;

        //将出现过的数字标记
        int number=a*1000000+b*1000+c;
        bool num[10]={0};
        while(number)
        {
            num[number%10]=1;
            number/=10;
        }

        //检查是否所以数字均出现
        //由于总共只有九个数字，因此只要全部出现则为不重复
        bool flag=1;
        for(int i=1;i<=9;i++)
        {
            if(num[i]==0)
            {
                flag=0;
                break;
            }
        }

        //如果均出现过，即符合条件，按格式进行输出
        if(flag)
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    return 0;
}