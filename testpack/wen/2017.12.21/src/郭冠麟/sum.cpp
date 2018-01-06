#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<fstream>
#include<algorithm>
using namespace std;
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t,n,x,i;
	long long s,mi;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		mi=999999;s=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&x);
			s+=x;
			if(mi>x)
				mi=x;
		}
		cout<<s+mi<<endl;
	}
	return 0;
}
