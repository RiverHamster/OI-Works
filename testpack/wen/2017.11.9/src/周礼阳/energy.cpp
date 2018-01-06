#include<stdio.h>
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);printf("%lld %lld\n",1ll*n*n,(1ll+n)*n/2*3);
	}
}

