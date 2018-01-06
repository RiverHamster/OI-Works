#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while(t--){
		int ans=0;
		scanf("%d",&n);
		ans+=n/10;
		n-=n/10*10;
		ans+=n/5;
		n-=n/5*5;
		ans+=n;
		printf("%d\n",ans);
	}
	return 0;
}
