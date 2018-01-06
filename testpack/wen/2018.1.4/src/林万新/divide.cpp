#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int t,n,a[55],f[5005];
int main()
{
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	scanf("%d\n",&t);
	while (t--)
	{
		memset(f,0,sizeof(f));
		scanf("%d\n",&n);
		for (int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for (int i=1;i<=n;i++)
		{
			for (int j=n;j>=a[i];j--)
				f[j]=max(f[j],f[j-a[i]]+a[i]);
		}
		printf("%d\n",f[n]);
	}
	return 0;
}

