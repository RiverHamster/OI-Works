#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	freopen ("elephant.in","r",stdin);
	freopen ("elephant.out","w",stdout);
	int n,i;
	int a,ans=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%*c%d",&a);
		ans+=a/10;
		a-=a/10*10;
		ans+=a/5;
		a-=a/5*5;
		ans+=a/1;
		a-=a/1*1;
		printf ("%d\n",ans);
		ans=0;
	}
	return 0;
}
