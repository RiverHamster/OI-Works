#include <cstdio>
#include <algorithm>
using namespace std;
long long a[100005];
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,x=0,y=0,ans=1<<30;
		scanf("%lld",&n);
		for(int i=1;i<=n;i++)
			scanf("%lld",&a[i]),y+=a[i];
		for(int i=1;i<=n;i++)
		{
			x+=a[i];
			ans=min(ans,x+y);
			y-=a[i];
		}
		printf("%lld\n",ans);
	}
	return 0;
}
