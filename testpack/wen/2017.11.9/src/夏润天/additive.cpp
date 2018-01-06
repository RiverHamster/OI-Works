#include<cstdio>
const int N=30005,M=35;
int f[N],a[M];
int main()
{
	int t,n,ans,s,i,j;
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<N;i++)
			f[i]=0;
		for(i=0;i<M;i++)
			a[i]=0;
		ans=0,s=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			s+=a[i];
		}
		f[0]=1;
		for(i=0;i<n;i++){
			for(j=s;j>=a[i];j--)
				f[j]+=f[j-a[i]];
		}
		for(i=0;i<n;i++)
			ans+=f[a[i]]-1;
		printf("%d\n",ans);
	}
	return 0;
}
