#include<iostream>
#include<cstdio>
#define f(i,j,n) for(i=j;i<=n;i++)
using namespace std;

const int N=35;
int a[N],ans,sum,m;
bool b[N];

inline void dfs(int x,int y,int z)
{
	int i;
	if(z>=a[x])
	{
		if(z==a[x])
			ans++;
		return;
	}
	f(i,y+1,m)
		if(!b[i])
			b[i]=true,dfs(x,i,z+a[i]),b[i]=false;
}

int main()
{
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int i;
		sum=ans=0;
		cin>>m;
		f(i,1,m)
		{
			cin>>a[i];
			sum+=a[i];
		}
		f(i,1,m)
			if(a[i]<=sum-a[i])
				b[i]=true,dfs(i,0,0),b[i]=false;
		cout<<ans<<endl;
	}
	return 0;
}
