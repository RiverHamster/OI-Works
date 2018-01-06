#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define m(a) memset(a,0,sizeof(a))
inline int mn(int a,int b){
	return a<b?a:b;
}
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t,n,a[100005],ff[100005],fb[100005];
	scanf("%d",&t); 
	while(t--){
		int ans=2147483646;
		scanf("%d",&n);
		ff[0]=0;
		fb[n+1]=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			ff[i]=ff[i-1]+a[i];
		}
		for(int i=n;i>=1;i--)
			fb[i]=fb[i+1]+a[i];
		for(int i=1;i<=n;i++)
            ans=mn(ans,ff[i]+fb[i]);
		printf("%d\n",ans);
	}
	return 0;
}
