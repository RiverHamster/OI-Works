#include<iostream>
#include<cstdio>
using namespace std;
bool a[10005];
int b[10005],x;
void db()
{
	for (int i=2;i<=10000;i++)
	{
		if (a[i]==0)
		{
			b[x++]=i;
			for (int j=i;j<=10000;j+=i)
				a[j]=1;
		}
	}
}
int main()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	db();
	int t,n,s,ans;
	scanf ("%d",&t);
	while (t--)
	{
		scanf("%d",&n);
		ans=0;
		for (int i=0;b[i]<=n;i++)
		{
			s=0;
			for (int j=i;s<n;j++)
				s+=b[j];
			if (s==n)
				ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}