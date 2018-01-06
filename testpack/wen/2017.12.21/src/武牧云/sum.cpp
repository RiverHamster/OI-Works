#include<cstdio>
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		long long a[100005]={0},b[100005];
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%lld",&a[i]);
		}
		long long s=a[1];
		b[1]=a[1];
		for(int i=2;i<=n;i++){
			b[i]=s+a[i];
			s+=a[i];
		}
		long long min=100000000,w;
		for(int i=1;i<=n;i++){
			w=b[n]+a[i];
			if(w<min)min=w;
		}
		printf("%lld\n",min);
	}
	return 0;
}
