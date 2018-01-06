#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int ans=0;
int a[10000];
bool zs(int i)
{
	for(int j=2;j<i;j++)
		if(i%j==0)
			return false;
	return true;
}

int biao()
{
	int ans=0;
	for(int i=2;i<10000;i++)
	{
		if(zs(i))
		{
			a[ans]=i;
			ans++;
		}
	}
}

int main()
{
	biao();
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	
	int n;
	scanf("%d",&n);
	int x[n],c;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&c);
		int b=c;
		for(int j=0;a[j]<b;j++)
		{
			for(int l=j;a[l]<b;l++)
			{
				if(c==0)
				{
					ans++;
					break;
				}
				c-=a[l];
			}
			c=b;
		}
		if(zs(c))
			ans++;
		printf("%d\n",ans);
		ans=0;
	}
	//for(int i=0;i<100;i++)
	//	printf("%d\n",a[i]);
	return 0;
}

