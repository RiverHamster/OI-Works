#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
//	freopen ("sum.in","r",stdin);
	//freopen ("sum.out","w",stdout);
	int nn,x,n,i,ans=0,z,mn=32767;
	scanf ("%d",&nn);
	for (i=0;i<nn;i++)
	{
		scanf ("%*c%d",&n);
		for (x=0;x<n;x++)
		{
			scanf ("%*c%d",&z);
			if (z<mn) mn=z;
			ans+=z;
		}
		ans+=mn;
		printf ("%d\n",ans);
		ans=0;
	}
	return 0;
}
