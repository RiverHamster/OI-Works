#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	long long total=0;
	int t,n,k,maxn;
	scanf("%d",&t);
	while (t--)
	{
		maxn=1<<30;
		total=0;
		scanf("%d",&n);
		for (int i=1;i<=n;i++)
		{
			scanf("%d",&k);
			if (k<maxn) maxn=k;
				total+=k;
		}
		total+=maxn;
		cout<<total<<endl;
	}
}
