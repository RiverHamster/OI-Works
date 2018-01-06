#include<cstdio>
int main(){freopen("outlet.in","r",stdin);
	           freopen("outlet.out","w",stdout);
	int t,k,a;
	scanf("%d",&t);
	while(t--){
		int sum=0;
		scanf("%d",&k);
		for(int i=0;i<k;i++)scanf("%d",&a),sum+=a;
		sum-=k-1;
		printf("%d\n",sum);
	}
	return 0;
}