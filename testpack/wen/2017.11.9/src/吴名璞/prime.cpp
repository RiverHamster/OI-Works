#include <cstdio>
int zsb[10005];
int zs(int n)
{
	for(int i=2;i*i<=n;i++)
	{if(n%i==0)return 0;}
	return 1;
}
int main()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	int t;
	int a,c=1;
	int ans=0;
	int l=1,r=1,sum=0;
	scanf("%d",&t);
	for(int i=2;i<=10000;i++)
	{
		if(zs(i)){zsb[c]=i;c++;}
	}
	while(t--)
	{
		scanf("%d",&a);
		while(r<=c&&l<=r){
			while(sum<a)sum+=zsb[r++];
			if(sum==a){ans++;}
			sum-=zsb[l++];}
		printf("%d\n",ans);
		l=1;r=1;sum=0;ans=0;
	}
}
