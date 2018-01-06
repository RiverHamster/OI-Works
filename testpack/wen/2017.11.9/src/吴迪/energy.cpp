#include <cstdio>
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	unsigned ans;
	while(t--){
		scanf("%d",&n);
		ans=(1+n)*n/2+n*(n-1)/2;
		printf("%u ",ans);
		ans=(1+n)*n/2*3;
		printf("%u\n",ans);
	}
	return 0;
}
