#include<cstdio>
#include<iostream>
using namespace std;
int t,n,a[2005]={2},l,ans;
bool prime (int a)
{
	for (int i=2;i*i<=a;i++)
		if (a%i==0)return 0;
	return 1;
}
int main ()
{
	freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout);
	scanf("%d",&t);
	for (int i=3;i<10000;i+=2)
		if (prime(i))a[++l]=i;
	while (t--)
	{
		ans=0;
		scanf("%d",&n);
		for (int i=0;i<=l;i++)
		{
			int m=n,j=i;
			while (m>0)
			{
				m-=a[j],j++;
				if (m==0)ans++;
			}
		}
		printf("%d\n",ans);
	}
    return 0;
}
