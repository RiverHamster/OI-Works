#include <stdio.h>
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		long long s=0;
        int minn=2147483646,m;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&m);
			s+=m;
			if(m<minn) minn=m;
		}
		printf("%lld\n",s+minn);
	}
	return 0;
}
