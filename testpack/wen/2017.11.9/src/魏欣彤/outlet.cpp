#include <stdio.h>
#include <string.h>
#include <iostream>
int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t,s=0,n,a[100];
	scanf("%d",&t);
	while (t--)
	{
		s=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			s+=a[i];
		}
		printf("%d\n",s-n+1);
	}
	return 0;
}