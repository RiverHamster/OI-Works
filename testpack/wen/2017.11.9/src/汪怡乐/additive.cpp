#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int t,n,a[105],ans,s;
bool b[105];
void dfs(int x,int i,int sss)
{
	if(sss>=a[x]){if(sss==a[x])ans++;return;}
	for (int j=i+1;j<=n;j++)
		if (!b[j]){b[j]=1;dfs(x,j,sss+a[j]);b[j]=0;}
}
int main()
{
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	scanf ("%d",&t);
	while (t--)
	{
		ans=s=0;
		scanf ("%d",&n);
		for (int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			s+=a[i];
		}
		for (int i=1;i<=n;i++)
			if (a[i]<=s-a[i]){b[i]=1;dfs(i,0,0);b[i]=0;}
		printf ("%d\n",ans);
	}
	return 0;
}
