#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t;
	scanf("%d",&t);
	long long ans=0,n;
	while (t--)
	{
		scanf("%lld",&n);
		ans=n*n;
		cout<<ans<<" ";
		ans=(1+n)*n/2;
		ans*=3;
		cout<<ans<<"\n";
	}
}
