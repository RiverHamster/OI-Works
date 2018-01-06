#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int x=0,y=0;
		int ans=0;
		if(n>=10){
			ans+=n/10;n-=10*ans;
		}
		if(n==0){
			printf("%d\n",ans);
			continue;
		}
		if(n>=5){
			x=n/5;
			ans+=x;
			n-=x*5;
		}
		if(n==0){
			printf("%d\n",ans);
			continue;
		}
		ans+=n;
		printf("%d\n",ans);
	}
	return 0;
}
