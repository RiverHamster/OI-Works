#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d",&n);
		int total=0,s;
		s=n%5;
		total+=s;
		n-=s;
		s=n%10;
		total+=s/5;
		n-=s;
			total+=n/10;
		printf("%d\n",total);
	}
	return 0;
}
