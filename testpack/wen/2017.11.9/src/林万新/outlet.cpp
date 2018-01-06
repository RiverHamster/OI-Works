#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t,k,k1,x,s;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d",&k);
		s=0;
		k1=k;
		while (k1--)
		{
			scanf("%d",&x);
			s+=x;
		}
		s-=(k-1);
		printf("%d\n",s);
	}
	return 0;
}