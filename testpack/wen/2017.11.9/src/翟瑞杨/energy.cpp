#include<cstdio>
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t,n;
	long long  ans1,ans2;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		ans1=(1+(2*n-1))*n/2;
		ans2=(1+n)*n/2*3;
		printf("%lld %lld",ans1,ans2);
	}
	return 0;
}
