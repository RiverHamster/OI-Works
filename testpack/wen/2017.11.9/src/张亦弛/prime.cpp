#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int p[5225],t,n,ss=1;
bool k[10005];
void pr()
{
	int s=1;
	for (int i=2;i<=10000;i++)
	{
		if (!k[i])
		{
			p[ss]=i;
			ss++;
			for (int j=i*i;j<=10000;j+=i)
			k[j]=true;
		}
	}
}
int main()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	scanf("%d",&t);
	pr();
	while (t--)
	{
		scanf("%d",&n);
		int s=0;
		for (int i=1;p[i]<=n;i++)
		{
			int ans=0;
			for (int j=i;ans<n&&p[j]<=n;j++)
			{
				ans+=p[j];
			}
			if (ans==n)
				s++;
		}
		printf("%d\n",s);
	}
}
