#include<cstdio>
#include<algorithm>
#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
int a[105];
int f[100005];
int main()
{
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	int t;
	int n;
	scanf("%d",&t);
	while(t--)
	{
		int sum=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		for(int i=1;i<=n;i++)
			for(int j=sum/2;j>=a[i];j--)
				f[j]=max(f[j],f[j-a[i]]+a[i]);
		printf("%d\n",sum-f[sum/2]*2);
		memset(f,0,sizeof(f));
	}
	return 0;
}