#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
long long t,n;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld %lld\n",n*n,(3*n+3*n*n)/2);
	}
	return 0;
}
