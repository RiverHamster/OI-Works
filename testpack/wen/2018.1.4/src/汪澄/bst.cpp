#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	int t;
	long long n;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld %lld\n",(n&(n-1))+1,n|(n-1));
	}
	return 0;
}
