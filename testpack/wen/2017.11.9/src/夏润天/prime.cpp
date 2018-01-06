#include<iostream>
#include<cstdio>
using namespace std;
bool np[30005]; 	
int prime[30005],n,a[30005];	
int work()
{
	for(int i=2;i*i<=n;i++)
	{
		if (!np[i])
		{
			for (int j=i*i; j<=n; j+=i)
				np[j]=true;
		}
	}
	int s=0;
	prime[s++]=2;
	for(int i=3;i<=n;i+=2)
	{
		if(!np[i]) 
			prime[s++]=i;
	}
	return s;	
}
int main()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	n=10005;
	int s=work();
	int t,p,k;
	scanf("%d",&t);
	for(int i=0;i<10005;i++)
		a[i]=0;
	for(int i=0;i<s;i++)
	{
		k=0;
		for(int j=i;j<s;j++)
		{
			k+=prime[j];
			if(k<=10000)
				a[k]++;
		}
	}
	while(t--)
	{
		scanf("%d",&p);
		printf("%d\n",a[p]);
	}
	return 0;
}
