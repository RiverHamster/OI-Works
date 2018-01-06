#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int n,k,a,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&k);
		for(int j=1;j<=k;j++)
		{
			scanf("%d",&a);
			ans+=a;
		}
		ans=ans-k+1;
		printf("%d\n",ans);
		ans=0;
	}
}


