#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
const int N=100005;
typedef long long ll;
int a,minn;
ll ans;
int t,n;
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	scanf("%d",&t);
	while(t--)
	{
		ans=0;minn=10000000;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a);
			ans+=a;
			minn=min(minn,a);
		}
		printf("%d\n",ans+minn);
	}
}
