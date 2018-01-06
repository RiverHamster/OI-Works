#include<cstdio>
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t,n,a,sum;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&a);
			sum+=a; 
		}
		printf("%d\n",sum-n+1);
	}
	return 0;
}
