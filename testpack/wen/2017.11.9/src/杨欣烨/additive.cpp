#include <stdio.h>
#include <string.h>
#define max(a,b) (a>b?a:b)
int a[1000],f[1000005];
int main(){
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	int t,n,s=0;
	scanf("%d",&t);
	while(t--){
		memset(f,0,sizeof(f));
		scanf("%d",&n);
		s=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			s+=a[i];
		}
		f[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=s;j>=a[i];j--){
				f[j]+=f[j-a[i]];
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++) ans+=f[a[i]];
		printf("%d\n",ans-n);
	}
	return 0;
}