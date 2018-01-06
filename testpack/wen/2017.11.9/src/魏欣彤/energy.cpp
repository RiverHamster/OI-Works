#include <stdio.h>
#include <string.h>
#include <iostream>
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t,n;
	unsigned s;
	scanf("%d",&t);
	while (t--)
	{
		s=1;
		scanf("%d",&n);
		s=n*n;
		printf("%u ",s);
		s=n*n*1.5+n*1.5;
		printf("%u\n",s);
	}
	return 0;
}