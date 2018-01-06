#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t,k,p,s;
	scanf("%d",&t);
	while(t--)
	{
		s=0;
		scanf("%d",&k);
		for(int i=0;i<k;i++)
		{
			scanf("%d",&p);
			s+=p;
		}
		printf("%d\n",s-k+1);
	}
	return 0;
}
