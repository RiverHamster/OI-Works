#include<cstdio>
#include<cstring>
int max(int a,int b){return a<b?b:a;}
int a[31],f[30001];
int main(){freopen("additive.in","r",stdin);
	           freopen("additive.out","w",stdout);
	int n,t;
	scanf("%d",&t);
	while(t--){
		int s=0;
		memset(f,0,sizeof(f));
	    scanf("%d",&n);
	    for(int i=0;i<n;i++)scanf("%d",&a[i]),s+=a[i];
		f[0]=1;
		for(int i=0;i<n;i++)
			for(int j=s;j>=a[i];j--)
				f[j]+=f[j-a[i]];
		///for(int i=0;i<n;i++)printf("%d ",f[a[i]]);
		int ans=0;
		for(int i=0;i<n;i++)ans+=f[a[i]]-1;
		printf("%d\n",ans);
	}
	return 0;
}