#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll mn(ll a,ll b){
	return a<b?a:b;
}
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t,n,x,mn;
	ll s;
	scanf("%d",&t);
	while(t--){
		mn=1<<30;
		s=0;
	    scanf("%d",&n);
	    for(int i=1;i<=n;i++){
			scanf("%d",&x);
	    	s+=x;
			mn=min(mn,x);
		}
		printf("%lld\n",s+mn);
    }
	return 0;
}
