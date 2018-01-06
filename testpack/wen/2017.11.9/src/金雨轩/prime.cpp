#include <stdio.h>
#include <cmath>
using namespace std;
int b[10001];
int ans=0;
int g=0;
int zs(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	if(n==3) return 1;
	for(int i=2;i<=n;i++) 
	{
		if(n%i==0) return 0;
		if(i>sqrt(n)) return 1;
	}
}
void input()
{
	for(int i=1;i<=10000;i++) if(zs(i)){b[g]=i;g++;}
}
int main ()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	input ();
	int n;
	scanf("%d",&n);
	int a[n];
	int d=0;
	int q=0;
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i)
	{
		int u=a[i];
		for(int k=q;;k++)
		{
			if(b[k]==u)
			{
				ans++;
				break;
			}
			if(u==0)
			ans++;
			if(b[k]>a[i]) break;
			u-=b[k];
		}
		q++;
		if(b[q]>a[i])
		{
			printf("%d\n",ans);
			ans=0;
			i++;
			q=0;
		}
	}
	return 0;
}
