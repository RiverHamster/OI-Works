#include <stdio.h>
int main(){
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	int DataC;
	long long x,tmp;
	scanf("%d",&DataC);
	while(DataC--){
		scanf("%lld",&x);
		tmp=x&(-x);
		printf("%lld %lld\n",x-tmp+1,x+tmp-1);
	}
	return 0;
}
