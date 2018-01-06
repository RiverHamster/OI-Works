#include <stdio.h>
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int n,s=0,tp;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&tp);
			s+=tp;
		}
		printf("%d\n",s-n+1);
	}
	return 0;
}