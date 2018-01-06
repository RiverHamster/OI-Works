#include<cstdio>
#include<algorithm>
#include<cmath>
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		ll tans,bans;
		scanf("%d",&n);
		tans=n*n;
		bans=1ll*n*(n+1)/2*3;
		cout<<tans<<' '<<bans<<endl;
	}
	return 0;
}
