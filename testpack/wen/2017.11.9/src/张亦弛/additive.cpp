#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int a[105],sum;
int b[300005],n,c[300005];
void  dfs(int dep,int num,int mxa,int cs)
{
	if (num>mxa)
	return;
	if (dep>n)
	return ;
	if (cs>=2)
	b[num]++;
	for (int i=dep+1;i<=n;i++)
	dfs(i,num+a[i],mxa,cs+1);
}
int main()
{
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	int t;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d",&n);
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		sum=0;
		int kkk=0;
		for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		c[a[i]]=1;
		kkk=max(a[i],kkk);
	}
	dfs(0,0,kkk,0);
	for (int i=0;i<=300000;i++)
	{
		if (c[i]==1&&b[i]>=1) sum+=b[i];
	}
	printf("%d\n",sum);
	}
}
