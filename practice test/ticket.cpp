#include<cstdio>
#include<iostream>
using namespace std;
long long int factoril(int x)
{
	long long int ans=1;
	for(int i=1;i<=x;i++)
		ans*=i;
	return ans;
}

long long int getans(int num_5,int num_10,int num_last_5)
{
	long long int ans=0;
	if(num_5==0&&num_10==0)
		return 1;
	if(num_5>0)
		ans+=getans(num_5-1,num_10,num_last_5+1);
	if(num_10>0&&num_last_5>0)
		ans+=getans(num_5,num_10-1,num_last_5-1);
	return ans;
}

int main()
{
	int M,N,K;
	cin>>M>>N>>K;
	if(K>M)cout<<0;
	int counter=0;
	for(int i=1;i<=N;i++)
	{
		if(i>=K)counter+=K;
		else counter+=i;
	}
	long long int ans=0;
	ans=getans(N,K,0);
	ans=ans*factoril(N)*factoril(K);
	cout<<ans;
	return 0;
}

