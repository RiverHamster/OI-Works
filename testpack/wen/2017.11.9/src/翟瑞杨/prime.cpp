#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int dp(int a){
	for(int i=2;i<sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int a[10005];
int main(){
	//freopen("prime.in","r",stdin);
	//freopen("prime.out","w",stdout);
	int t,i,j,ans=0,s,n;
	scanf("%d",&t);
	for(i=2,j=1;i<10000;i++,j++){
		a[0]=2;
		if(dp(i)){
			a[j]=i;
		}
	}
	while(t--){
		scanf("%d",&n);
		s=n;
		for(i=0;i<=sqrt(s);i++){
			for(j=i;j<=sqrt(s);j++){
				n-=a[j];
				if(n==0) {ans++;break;}
			}
		}
		printf("%d\n",ans);
		ans=0;
	}
	return 0;
}
