//elephant
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
    freopen("elephant.in","r",stdin);
    freopen("elephant.out","w",stdout);
	int t,x;
	scanf("%d",&t);
	int ans=0;
	int miao,wang;
	while (t--){
		ans=0;
		scanf("%d",&x);
		if (x>=10) {wang=x/10; ans+=wang; x-=wang*10;}
		if (x>=5) {miao=x/5; ans+=miao; x-=miao*5;}
		ans+=x;
		printf("%d\n",ans);
	}
    return 0;
}