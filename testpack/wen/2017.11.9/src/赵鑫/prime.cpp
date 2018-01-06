#include<iostream>
#include<cstdio>
#define f(i,j,n) for(i=j;i<=n;i++)
#define p(i,j,n) for(i=j;i*i<=n;i++)
using namespace std;

int a[1230];

bool Is_Prime(int x)
{
	if(x==1)
		return false;
	if(x==2)
		return true;
	int i;
	p(i,2,x)
		if(!(x%i))
			return false;
	return true;
}

void Prime_Cover()
{
	int i,j=0;
	f(i,2,10000)
		if(Is_Prime(i))
			a[++j]=i;
}

int work(int n)
{
	int i,j,sum,ans=0;
	if(Is_Prime(n))
		ans++;
	for(i=1;a[i]<n;i++)
	{
		sum=0;
		for(j=i;a[j]<n;j++)
		{
			sum-=a[j];
			sum+=a[j]*2;
			if(sum==n)
			{
				ans++;
				break;
			}
		}
	}
	return ans;
}
int main()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	Prime_Cover();
	int t,i;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<work(n)<<endl;
	}
	return 0;
}
