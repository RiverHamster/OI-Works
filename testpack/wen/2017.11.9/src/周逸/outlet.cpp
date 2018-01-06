#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int a;
int da=0;
int main()
{
	freopen ("outlet.in","r",stdin);
	freopen ("outlet.out","w",stdout);
	int n,i,j,z;
	scanf ("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf ("%*c%d",&j);
		for (z=0;z<j;z++)
		{
			scanf ("%*c%d",&a);
			da=da+a-1;
		}
		printf ("%d\n",(da+1));
		da=0;
	}
	return 0;
}
