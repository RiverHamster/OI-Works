#include<cstdio>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
const int N=100005;
ll x;
ll sum;
ll minans;
ll mix(ll a,ll b)
{
	return a>b?b:a;
}
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int n;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		minans=1<<30;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&x);
			sum+=x;
			minans=mix(minans,x);
		}
		printf("%lld\n",sum+minans);
		sum=0;
	}
	return 0;
}