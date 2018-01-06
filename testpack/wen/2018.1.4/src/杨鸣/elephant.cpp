#include<algorithm>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<queue>
#include<string>
#include<ctime>
#include<map>
#define f(i,j,n) for(i=j;i<=n;i++)
#define p(i,j,n) for(i=j;i>=n;i--)
#define ll long long
#define ld long double
using namespace std;

int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,ans=0;
		scanf("%d",&x);
		if(x>=10)
			ans+=x/10,x%=10;
		if(x>=5)
			ans+=x/5,x%=5;
		ans+=x;
		printf("%d\n",ans);
	}
}
