#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int n,s=0;
	scanf("%d",&n);
	while(n)
	{
		int g;
		scanf("%d",&g);
		int a[g];
		for(int i=0;i<g;i++){scanf("%d",&a[i]);s+=a[i];}
		s=s-(g-1);
		printf("%d\n",s);
		s=0;
		n--;
	}
	return 0;
} 
