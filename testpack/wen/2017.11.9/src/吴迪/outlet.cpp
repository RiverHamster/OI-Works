#include <cstdio>
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int ans;
	int t;
	scanf("%d",&t);
	int n,a;
	while(t--){
		scanf("%d",&n);
		ans=1;
		for(int i=1;i<=n;i++){
			scanf("%d",&a);
			ans+=a-1;
		}
		printf("%d\n",ans);
	}
	return 0;
}
