#include<iostream>
#include<cstdio>
#define f(i,j,n) for(i=j;i<=n;i++)
using namespace std;
typedef unsigned long long ll;

int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,ans1,ans2;
		cin>>n;
		ans1=ans2=0;
		while(n--)
			ans1+=2*(n+1)-1,ans2+=3*(n+1);
		cout<<ans1<<' '<<ans2<<endl;
	}
	return 0;
}
