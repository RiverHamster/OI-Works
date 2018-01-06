#include<iostream>
#include<cstdio>
using namespace std;
int a[10001],s,i,j,t,n,sum,k;
int main(){
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	a[++s]=2;
	bool ok=1;
	for(i=3;i<=10000;i+=2){
		ok=1;
		for(j=2;j*j<=i&&ok;j++)
		if(i%j==0) ok=0;
		if(ok) a[++s]=i;
	}
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
		for(i=1;i<=1229&&a[i]<=n;i++){
			k=0;
			for(j=i;j<=1229&&k<n;j++)
			k+=a[j];
			if(k==n) sum++;
		}
		printf("%d\n",sum);
	}
}
