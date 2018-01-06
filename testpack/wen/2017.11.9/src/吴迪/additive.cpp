#include <cstdio>
#include <cstring>
int a[35];
int f[30005];
int main(){
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	int t;
	int n;
	int sum,ans;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
		memset(f,0,sizeof(f));
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
			for(int j=sum-a[i];j>0;j--){
				f[j+a[i]]+=f[j];
			}
			f[a[i]]++;
		}
		ans=0;
		for(int i=1;i<=n;i++){
			ans+=f[a[i]]-1;
		}
		printf("%d\n",ans);
	}
	return 0;
}
