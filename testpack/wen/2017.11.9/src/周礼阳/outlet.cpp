#include<stdio.h>
int main(){freopen("outlet.in","r",stdin);freopen("outlet.out","w",stdout);
	int t;scanf("%d",&t);
	while(t--){
		int n,s=0,a;scanf("%d",&n);
		for(int i=0;i<n;i++) scanf("%d",&a),s+=a-1;
		printf("%d\n",s+1);
	}
}

