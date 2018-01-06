#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
long long n,t,ans1,ans2;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		scanf("%lld",&t);
		for(long long j=1;j<=t;j++){
			ans1+=(2*j-1);
			ans2+=(3*j);
		}
		cout<<ans1<<' '<<ans2<<endl;
		ans1=0;
		ans2=0;
	}
	return 0;
}
