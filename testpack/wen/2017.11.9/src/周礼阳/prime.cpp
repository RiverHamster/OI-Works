#include<stdio.h>
int a[1230],l;
inline void prime(){
	a[l++]=2;
	for(int i=3;i<=9973;i+=2){
		bool t=1;
		for(int j=0;a[j]*a[j]<=i;j++) if(i%a[j]==0) t=0;
		if(t)a[l++]=i;
	}
}
int main(){
	freopen("prime.in","r",stdin);freopen("prime.out","w",stdout);
	prime();
	int t;scanf("%d",&t);
	while(t--){
		int n,sum=0;scanf("%d",&n);
		for(int i=0;i<l;i++){
			if(a[i]>n) break;int s=0;
			for(int j=i;a[j]+s<=n;j++) s+=a[j];
			sum+=(s==n);
		}
		printf("%d\n",sum);
	}
}

