#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int a[10005],f[100005];
int main()
{
    freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	int t,n,i,j;
	cin>>t;
	while (t--)
	{
		int s=0;
		cin>>n;
		for (i=0;i<100005;i++)
			f[i]=0;
		for (i=1;i<=n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		f[0]=1;
		for (i=1;i<=n;i++)
			for (j=s;j>=a[i];j--)
			{
				f[j]+=f[j-a[i]];
			}
		int ans=0;
		for (i=1;i<=n;i++)
		{
			ans+=f[a[i]]-1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
