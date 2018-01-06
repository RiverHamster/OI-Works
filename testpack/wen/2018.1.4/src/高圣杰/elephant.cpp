#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int t,n;
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int ans=0;
		ans+=n/10;
		n=n%10;
		ans+=n/5;
		n=n%5;
		ans+=n;
		printf("%d\n",ans);
	}
	return 0;
}
