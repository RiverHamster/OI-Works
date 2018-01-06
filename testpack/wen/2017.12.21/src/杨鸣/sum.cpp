#include<cstdio>
#include<algorithm>
#define f(i,j,n) for(i=j;i<=n;i++)
#define ll long long
using namespace std;

const int oo=2147483647;

int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,x,minx,i;
		ll sum;
		sum=0,minx=oo;
		scanf("%d",&n);
		f(i,1,n)
		{
			scanf("%d",&x);
			sum+=x;
			minx=min(minx,x);
		}
		printf("%d\n",sum+minx);
	}
	return 0;
}
