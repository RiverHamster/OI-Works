#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		long long ans1=0,ans2=0;
		scanf("%d",&n);
		ans1=n*n;
		for(int i=1;i<=n;i++){
			ans2+=i*3;
		}
		printf("%lld %lld\n",ans1,ans2);
	}
	return 0;
}
