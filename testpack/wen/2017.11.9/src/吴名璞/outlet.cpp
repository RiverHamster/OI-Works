#include<cstdio>
int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t;
	scanf("%d",&t);
	int k,ans=0,a;
	while(t--)
	{
		scanf("%d",&k);
		while(k--)
		{
			scanf("%d",&a);
			ans+=a;
			ans-=1;
		}
		printf("%d\n",ans+1);
		ans=0;
	}
	return 0;
}
