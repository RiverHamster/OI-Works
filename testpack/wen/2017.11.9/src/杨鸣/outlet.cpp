#include<iostream>
#include<cstdio>
#define f(i,j,n) for(i=j;i<=n;i++)
using namespace std;

int a[15];

int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int k,ans,i;
		cin>>k;
		ans=0;
		f(i,1,k)
		{
			cin>>a[i];
			ans+=a[i];
		}
		ans-=k-1;
		cout<<ans<<endl;
	}
	return 0;
}
