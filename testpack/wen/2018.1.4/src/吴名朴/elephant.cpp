#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int ans=0;
		ans+=n/10;
		n-=(n/10)*10;
		ans+=n/5;
		n-=(n/5)*5;
		ans+=n;
		printf("%d\n",ans);
	}
	return 0;
}