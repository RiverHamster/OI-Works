#include<iostream>
#include<cstdio>
#define f(i,j,n) for(i=j;i<=n;i++)
#define p(i,j,n) for(i=j;i*i<=n;i++)
using namespace std;
int a[1250],t,n,ans;

bool Is_Prime(int x)
{
	int i;
	p(i,2,x)
		if(!(x%i))
			return false;
	return true;
}

void Prime_Cover()
{
	int i,j=1;
	a[1]=2;
	f(i,3,10000)
		if(Is_Prime(i))
			a[++j]=i;
}

int work()
{
	int s,i,j;
	for(i=2;a[i]<n;i++)
	{
		s=0;
		for(j=i;a[j]<n;j++)
		{
			s+=a[j];
			if(s==n)
			{
				ans++;
				break;
			}
		}
	}
	return ans;
}
int main(){
    freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout);
    Prime_Cover();
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n;
		if(Is_Prime(n))
			ans++;
		cout<<work()<<endl;
	}
    return 0;
}
