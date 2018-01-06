#include<cstdio>
#include<iostream>
using namespace std;
int a[100005],b[100005];
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t,n,min=100000,mini,ans=0;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&n);
		for(int k=1;k<=n;k++)
		{
			scanf("%d",&a[k]);
		}
		for(int j=1;j<=n;j++)
		{
			if(a[j]<min){min=a[j];}
		}
		for(int j=1;j<=n;j++)
		{
			ans+=a[j];
		}
		ans+=min;
		printf("%d\n",ans);
		ans=0;
	}
}
