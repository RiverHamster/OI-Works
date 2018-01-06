#include<cstdio>
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		cout<<n*n<<' '<<n*(n+1)/2*3<<endl;
	}
	return 0;
}
