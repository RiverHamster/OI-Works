#include<cstdio>
#include<iostream>
#include<cmath>
int a[1300];
using namespace std;
int ss(int s)
{
	for(int i=2;i<=sqrt(s);i++)
	{
		if (s%i==0)return 0;
	}
	return 1;
}
int ssb()
{
	int n=0;
	for (int i=2;i>=1;i++)
	{
		if (n==1229){return 0;}
		if (ss(i)){a[n]=i;n++;}
	}
}
int main()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	ssb();
	int n,ans=0,c,h;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{   scanf("%d",&c);
	    for(int j=0;j<1229;j++)
	    {
	    	if (a[j]==c){ans++;break;}
	    	if (a[j]>c){break;}
			for(int q=j;q<1229;q++)
			{
				h+=a[q];
				if(h==c){ans++;break;}
				if(h>c){break;}
			}
			h=0;
		}
		printf("%d\n",ans);
		ans=0;
	}
}
	


