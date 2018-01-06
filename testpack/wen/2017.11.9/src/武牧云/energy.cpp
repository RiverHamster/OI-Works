#include<cstdio>
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		long long s1=0,s2=0,x;
		scanf("%lld",&x);
		s1=(1+2*x-1)*x/2;
		s2=(1+x)*x/2*3;
		//for(int i=1;i<=x;i++){
		//	s1-=3*i;
		//}
		printf("%lld %lld\n",s1,s2);
	}
	return 0;
}
