#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
   freopen("energy.in","r",stdin);
   freopen("energy.out","w",stdout);
	int t;
	long long n;
	long long ans1,ans2;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		ans1=n*n;
		ans2=(1+n)*n/2*3;
		cout<<ans1<<" "<<ans2<<endl;
	}
	return 0;
}
