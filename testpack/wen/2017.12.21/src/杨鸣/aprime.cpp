#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int a[1050],b[20005],t,d;
#define f(i,j,n) for(i=j;i<=n;i++)
#define p(i,j,n) for(i=1;i<=j;i+=n)
#define q(i,j,q) for(i=j;i*i<=n;i++)
bool pdd(int x)
{
	int i=2;
	for (i=2;i*i<=x;i++)
		if (x%i==0)
			return false;
	return true;
}
inline bool sum(int x,int y)
{
	int i,sum=0;
	for (i=x;i<=y;i++)
	{
		if (pdd(sum)&&sum!=0&&i-1!=x)
			return false;
		sum+=a[i];
	}
	if (pdd(sum)&&sum!=0)
		return false;
	else
		return true;
}

inline bool able()
{
	int i,j;
		for (j=1;j+d-1<=t;j++)
			if(sum(j,j+d-1)==0)
				return false;
	return true;
}

int main()
{freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	int T;
	cin>>T;
	while(T--){
	int n,m,i,j;
		bool ok=0;
	cin>>n>>m>>d;
	t=m-n+1;
	for (i=1;i<=t;i++)
	{
		a[i]=i+n-1;
	}
	while (1)
	{
		if (able())
		{
			for (i=1;i<=t;i++)
			{
				cout<<a[i]<<" ";
			}
			ok=1;
			break;
		}
		next_permutation(a+1,a+t+1);
	}
	if(!ok)
		cout<<"None";
	cout<<endl;}
	return 0;
}