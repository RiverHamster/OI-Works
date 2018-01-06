#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t,n,s=0,k;
	scanf("%d",&t);
	while (t--)
	{
		s=0;
		scanf("%d",&n);
		for (int i=1;i<=n;i++)
		{
			scanf("%d",&k);
			s+=k;
		}
		printf("%d\n",s-n+1);
	}
}
