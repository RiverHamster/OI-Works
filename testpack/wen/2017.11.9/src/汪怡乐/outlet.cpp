#include<cstdio>
#include<iostream>
using namespace std;
int t,n,a[105],ans;
int main ()
{
	freopen("outlet.in","r",stdin);
    freopen("outlet.out","w",stdout);
	scanf("%d",&t);
	while (t--)
	{
		ans=0;
		scanf("%d",&n);
		for (int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			ans+=a[i];
		}
		printf("%d\n",ans-n+1);
	}
    return 0;
}
