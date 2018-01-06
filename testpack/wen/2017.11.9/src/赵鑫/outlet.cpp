#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int t,k,ans,a,n;
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		ans=0;
		scanf("%d",&k);
		n=k;
		while(k--){
			scanf("%d",&a);
			ans+=a;
		}
		printf("%d\n",ans-n+1);
	}
	return 0;
}
