#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	freopen ("number.in","r",stdin);
	freopen ("number.out","w",stdout);
	int n,i;
	int k,s;
	int z,b;
	int ans;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d%d",&k,&s);
		z=0;
		for (b=s;b>0;b/=10)
		{
			z+=b%10;
		}
		ans=k-z;
		if (ans<=0) {printf ("0\n");}
		if (ans>=0&&ans<=9) {printf ("1");}
		if (ans>=0&&ans>=9&&ans%9!=0) {
			printf ("%d\n",ans/9+1);
		}
		if (ans%9==0)
		{
			printf ("%d",ans/9);
		}
	}
	return 0;
}

