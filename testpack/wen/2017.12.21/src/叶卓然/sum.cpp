#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	long long ans=0;
	int n,m,s,x;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&m);
		scanf("%d",&x);
		ans+=x;
		s=x;
		for(int j=2;j<=m;j++)
		{
			scanf("%d",&x);
			ans+=x;
		}
		ans+=s;
		cout<<ans<<endl;
		ans=0;
	}
}

