#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str_ans[105];
	char str[105];
	int len=0;
	while(scanf("%s",str)!=EOF)
	{
		if(strlen(str)>len)
		{
			len=strlen(str);
			strncpy(str_ans,str,strlen(str));
		}
	}
	cout<<str_ans;
	return 0;
}


